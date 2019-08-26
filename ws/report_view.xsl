<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform" xmlns:fo="http://www.w3.org/1999/XSL/Format">
<xsl:param name="TitleLabel1">WSDL Validation Report</xsl:param>
<xsl:param name="TitleLabel2">WSDL Validation Report</xsl:param>
<xsl:param name="WSDLHierarchyLabel">WSDL Hierarchy</xsl:param>
<xsl:param name="ResultsLabel">Detailed Result</xsl:param>
<xsl:param name="SettingsLabel">Settings:</xsl:param>
<xsl:param name="FontLabel1"> - Failed</xsl:param>
<xsl:param name="FontLabel2"> - Failed</xsl:param>
<xsl:param name="FontLabel3"> - Failed</xsl:param>
<xsl:param name="FontLabel4"> - Warning</xsl:param>
<xsl:param name="FontLabel5"> - Passed</xsl:param>
<xsl:param name="MessageInformationTableLabel">Message Information table</xsl:param>
<xsl:param name="TableHeadLabel1">Line No.</xsl:param>
<xsl:param name="TableHeadLabel2">Position</xsl:param>
<xsl:param name="TableHeadLabel3">Message</xsl:param>
	<xsl:output method="xml" encoding="UTF-8" omit-xml-declaration="yes"/>
	<xsl:param name="show_ns"/>
	<xsl:variable name="apos">'</xsl:variable>
	<xsl:template match="/">
		<html>
			<meta http-equiv="Content-Type" content="text/html; charset=UTF-8"/>
			<head>
				<title><xsl:copy-of select="$TitleLabel1"/></title>
				<style>
body
{ background-color: #d4d4d4; background-image: none; background-repeat: repeat-x; margin: 0; padding: 0; overflow: auto }table.full { width: 100%; height: 100% }table.width_full { width: 100%; height: auto }td.main { padding: 5px 10px 10px; vertical-align: top }td.main_frame { background-color: white; padding: 10px 14px; vertical-align: top; border: solid 1px #003366 }td.top { color: white; font-size: 11px; font-family: Arial, Helvetica, sans-serif; font-weight: bold; background-color: #003366; text-transform: capitalize; padding-left: 10px; height: 18px }td.under_top { color: #273236; font-size: 12px; font-family: Arial, Helvetica, sans-serif; text-transform: capitalize; padding-left: 10px; height: 20px }td { font-size: 11px; font-family: Verdana, Arial, Helvetica, sans-serif }p { font-size: 11px; font-family: Verdana, Arial, Helvetica, sans-serif }h1  { font-size: 18px; font-family: Verdana, Arial, Helvetica, sans-serif; line-height: 20px; margin-bottom: 10px }h2 { font-size: 14px; font-family: Verdana, Arial, Helvetica, sans-serif; line-height: 18px; margin-bottom: 10px }h3  { font-size: 12px; font-weight: bold; line-height: 14px; margin-bottom: 10px }.wingding2  { font-size: 18px; font-family: "Wingdings 2"; mso-ascii-font-family: Times New Roman; mso-char-type: symbol; mso-hansi-font-family: Times New Roman; mso-symbol-font-family: Wingdings 2  }a { color: #669 }a:hover { color: #003366 }td.table_head { color: #485464; font-weight: bold; padding: 2px 4px; height: 4px; vertical-align: top; border-top: 2px solid #a3a9b1; border-bottom: 2px solid #a3a9b1 }td.table_head_mid { color: #485464; font-weight: bold; text-align: center; padding: 2px 4px; width: 80px; vertical-align: top; border-top: 2px solid #a3a9b1; border-bottom: 2px solid #a3a9b1 }td.table_lightrow 
				{ background-color: #f3f3f3; padding: 3px 4px; height: 20px; vertical-align: top }td.table_no_lightrow { background-color: #f3f3f3; text-align: right; padding: 3px 35px 3px 4px; height: 20px; vertical-align: top }td.table_midr
ow { background-color: #e6e6e6; padding: 3px 4px; height: 20px; vertical-align: top }td.table_no_midrow { background-color: #e6e6e6; text-align: right; padding: 3px 35px 3px 4px; height: 20px; vertical-align: top }td.table_end { border-top: 2px solid #a3a9b1 }.red { color: #c00 }.orange { color: #f60 }
}
</style>
			</head>
			<body bgcolor="#ffffff">
				<table class="full" border="0" cellspacing="0" cellpadding="0">
					<tr>
						<td class="top">HP</td>
					</tr>
					<td class="under_top">
						<b><xsl:copy-of select="$TitleLabel2"/></b> -									<xsl:for-each select="Report">
							<xsl:value-of select="@time"/>
						</xsl:for-each>
					</td>
					<tr>
						<td class="main">
							<TABLE class="full" border="0" cellspacing="0" cellpadding="0">
								<tr>
									<td class="main_frame">
										<u>
											<h2><xsl:copy-of select="$WSDLHierarchyLabel"/></h2>
										</u>
										<xsl:apply-templates select="." mode="render"/>
										<!--  		 WSDL Validation Report !-->
										<br/>
										<u>
											<h2><xsl:copy-of select="$ResultsLabel"/></h2>
										</u>
										<h3><xsl:copy-of select="$SettingsLabel"/></h3>
										<table class="width_full" border="0" cellspacing="0" cellpadding="0">
											<xsl:for-each select="//Report/settings/setting">
												<TR>
													<TD>
														<input type="checkbox" disabled="true">
															<xsl:if test="@value='Enabled'">
																<xsl:attribute name="checked"/>
															</xsl:if>
														</input>
														<xsl:value-of select="@name"/>
														<br/>
													</TD>
												</TR>
											</xsl:for-each>
										</table>
										<table class="width_full" border="0" cellspacing="0" cellpadding="0">
											<xsl:for-each select="//WSDL">
												<br/>
												<br/>
												<h1>
													<xsl:variable name="hrefval" select="@unc"/>
													<xsl:value-of select="position()"/>.									<a 								href="{$hrefval}"> File :									<xsl:value-of select="@name"/>
								</a>
															<xsl:choose>
																	<xsl:when test="msgs/msg/@severity='Fatal Error'">
																			<b><font color="#FF0000"><xsl:copy-of select="$FontLabel1"/></font></b>
																	</xsl:when>
																	<xsl:when test="msgs/msg/@severity='Error'">
																			<b><font color="#FF0000"><xsl:copy-of select="$FontLabel2"/></font></b>
																	</xsl:when>
																	<xsl:when test="msgs/msg/@severity='Undefined'">
																			<b><font color="#FF0000"><xsl:copy-of select="$FontLabel3"/></font></b>
																	</xsl:when>
																	<xsl:when test="msgs/msg/@severity='Warning'">
																			<b><font color="#FF9933"><xsl:copy-of select="$FontLabel4"/></font></b>
																	</xsl:when>
																	<xsl:otherwise>
																			<b><font color="green"><xsl:copy-of select="$FontLabel5"/></font></b>
																	</xsl:otherwise>
															</xsl:choose>								
					
												</h1>
																			
      <xsl:for-each select="msgs">
												<table class="width_full" border="0" cellspacing="0" cellpadding="0">
													<!--						<xsl:if test="parent::WSDL">							<xsl:attribute name="style">							<xsl:value-of select="'margin-left:30px'"/></xsl:attribute>						</xsl:if>!-->
													<center>
														<h3><xsl:copy-of select="$MessageInformationTableLabel"/></h3>
													</center>
													<td class="table_head_mid"><xsl:copy-of select="$TableHeadLabel1"/></td>
													<td class="table_head_mid"><xsl:copy-of select="$TableHeadLabel2"/></td>
													<td class="table_head"><xsl:copy-of select="$TableHeadLabel3"/></td>
													<xsl:for-each select="msg">
														<tr>
															<td>
																<xsl:if test="position() mod 2 = 0">
																	<xsl:attribute name="class">table_no_midrow</xsl:attribute>
																</xsl:if>
																<xsl:if test="position() mod 2 = 1">
																	<xsl:attribute name="class">table_no_lightrow</xsl:attribute>
																</xsl:if>
																<xsl:value-of select="@line"/>
															</td>
															<td>
																<xsl:if test="position() mod 2 = 0">
																	<xsl:attribute name="class">table_no_midrow</xsl:attribute>
																</xsl:if>
																<xsl:if test="position() mod 2 = 1">
																	<xsl:attribute name="class">table_no_lightrow</xsl:attribute>
																</xsl:if>
																<xsl:value-of select="@col"/>
															</td>
															<xsl:choose>
																<xsl:when test="@severity='Fatal Error'">
																	<td>
																		<xsl:if test="position() mod 2 = 0">
																			<xsl:attribute name="class">table_midrow</xsl:attribute>
																		</xsl:if>
																		<xsl:if test="position() mod 2 = 1">
																			<xsl:attribute name="class">table_lightrow</xsl:attribute>
																		</xsl:if>
																		<font color="#FF0000">
																			<xsl:value-of select="."/>
																		</font>
																	</td>
																</xsl:when>
																<xsl:when test="@severity='Error'">
																	<td>
																		<xsl:if test="position() mod 2 = 0">
																			<xsl:attribute name="class">table_midrow</xsl:attribute>
																		</xsl:if>
																		<xsl:if test="position() mod 2 = 1">
																			<xsl:attribute name="class">table_lightrow</xsl:attribute>
																		</xsl:if>
																		<font color="#FF0000">
																			<xsl:value-of select="."/>
																		</font>
																	</td>
																</xsl:when>
																<xsl:when test="@severity='Undefined'">
																	<td>
																		<xsl:if test="position() mod 2 = 0">
																			<xsl:attribute name="class">table_midrow</xsl:attribute>
																		</xsl:if>
																		<xsl:if test="position() mod 2 = 1">
																			<xsl:attribute name="class">table_lightrow</xsl:attribute>
																		</xsl:if>
																		<font color="#FF0000">
																			<xsl:value-of select="."/>
																		</font>
																	</td>
																</xsl:when>
																<xsl:when test="@severity='Warning'">
																	<td>
																		<xsl:if test="position() mod 2 = 0">
																			<xsl:attribute name="class">table_midrow</xsl:attribute>
																		</xsl:if>
																		<xsl:if test="position() mod 2 = 1">
																			<xsl:attribute name="class">table_lightrow</xsl:attribute>
																		</xsl:if>
																		<font color="#FF9933">
																			<xsl:value-of select="."/>
																		</font>
																	</td>
																</xsl:when>
																<xsl:when test="@severity='Notification'">
																	<td>
																		<xsl:if test="position() mod 2 = 0">
																			<xsl:attribute name="class">table_midrow</xsl:attribute>
																		</xsl:if>
																		<xsl:if test="position() mod 2 = 1">
																			<xsl:attribute name="class">table_lightrow</xsl:attribute>
																		</xsl:if>
																		<font color="green">
																			<xsl:value-of select="."/>
																		</font>
																	</td>
																</xsl:when>
															</xsl:choose>
														</tr>
													</xsl:for-each>
													<tr>
														<td class="table_end" colspan="3">&#160;</td>
													</tr>
												</table>
								      </xsl:for-each>
											</xsl:for-each>
											<!--  		Start WSDL Hierarchy Report  !-->
										</table>
									</td>
								</tr>
							</TABLE>
						</td>
					</tr>
				</table>
				<br/>
			</body>
		</html>
	</xsl:template>
	<xsl:template match="//WSDL" mode="render">
		<xsl:call-template name="ascii-art-hierarchy"/>
		<span class="connector"/>
		<span class="element"/>
		<!-- make wsdl bold 		!-->
		<b>
			<!-- PRINT WSDL !-->
			 <xsl:value-of select="substring-after(@name,'.')" />
			<!-- <xsl:value-of select="local-name()"/> !-->
  			<xsl:text>&#160;&#160;</xsl:text>
		</b>
		<!-- make attribute blue 	!-->
		<font color="#0000B0">	<b> <xsl:value-of select="@name"/> </b> </font>
		<br/>
		<br/>
		<xsl:apply-templates select="WSDL" mode="render"/>
	</xsl:template>
	<xsl:template match="text()" mode="render">
		<xsl:call-template name="ascii-art-hierarchy"/>
		<span class="value">
			<!-- make spaces be non-breaking spaces, since this is HTML -->
			<xsl:call-template name="escape-ws">
				<xsl:with-param name="text" select="translate(.,' ','&#160;')"/>
			</xsl:call-template>
		</span>
		<br/>

	</xsl:template>
	<xsl:template name="ascii-art-hierarchy">
		<xsl:for-each select="ancestor::*">
			<xsl:choose>
				<xsl:when test="following-sibling::node()">
					<span class="connector">&#160;&#160;&#160;&#160;</span>
				</xsl:when>
				<xsl:otherwise>
					<xsl:if test="position() > 2">
						<span class="connector">&#160;&#160;&#160;&#160;</span>
					</xsl:if>
				</xsl:otherwise>
			</xsl:choose>
		</xsl:for-each>
		<xsl:choose>
			<xsl:when test="parent::node() and ../child::node()">
				<span class="connector">&#160;&#160;&#160;&#160;</span>
			</xsl:when>
			<xsl:otherwise>
				<span class="connector">&#160;&#160;&#160;</span>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>
	<!-- recursive template to escape linefeeds, tabs -->
	<xsl:template name="escape-ws">	</xsl:template>
</xsl:stylesheet>
