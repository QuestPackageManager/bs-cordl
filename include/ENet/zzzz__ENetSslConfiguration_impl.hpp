#pragma once
// IWYU pragma private; include "ENet/ENetSslConfiguration.hpp"
#include "ENet/zzzz__SslMode_impl.hpp"
#include "ENet/zzzz__ENetSslConfiguration_def.hpp"
// Ctor Parameters [CppParam { name: "mode", ty: "::ENet::SslMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "certificatePath", ty: "::StringW", modifiers: "", def_value: Some("{}") },
// CppParam { name: "certificate", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "privateKeyPath", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "privateKey", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "validateCertificate", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "rootCertificatePath", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "rootCertificate", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "hostName", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::ENet::ENetSslConfiguration::ENetSslConfiguration(::ENet::SslMode mode, ::StringW certificatePath, ::StringW certificate, ::StringW privateKeyPath, ::StringW privateKey,
                                                             int32_t validateCertificate, ::StringW rootCertificatePath, ::StringW rootCertificate, ::StringW hostName) noexcept {
  this->mode = mode;
  this->certificatePath = certificatePath;
  this->certificate = certificate;
  this->privateKeyPath = privateKeyPath;
  this->privateKey = privateKey;
  this->validateCertificate = validateCertificate;
  this->rootCertificatePath = rootCertificatePath;
  this->rootCertificate = rootCertificate;
  this->hostName = hostName;
}
// Ctor Parameters []
constexpr ::ENet::ENetSslConfiguration::ENetSslConfiguration() {}
