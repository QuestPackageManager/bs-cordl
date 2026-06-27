#pragma once
// IWYU pragma private; include "OVR/OpenVR/EIOBufferError.hpp"
#include "OVR/OpenVR/zzzz__EIOBufferError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EIOBufferError::EIOBufferError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EIOBufferError::EIOBufferError()   {
}
constexpr ::OVR::OpenVR::EIOBufferError  OVR::OpenVR::EIOBufferError::IOBuffer_Success{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EIOBufferError  OVR::OpenVR::EIOBufferError::IOBuffer_OperationFailed{static_cast<int32_t>(0x64)};
constexpr ::OVR::OpenVR::EIOBufferError  OVR::OpenVR::EIOBufferError::IOBuffer_InvalidHandle{static_cast<int32_t>(0x65)};
constexpr ::OVR::OpenVR::EIOBufferError  OVR::OpenVR::EIOBufferError::IOBuffer_InvalidArgument{static_cast<int32_t>(0x66)};
constexpr ::OVR::OpenVR::EIOBufferError  OVR::OpenVR::EIOBufferError::IOBuffer_PathExists{static_cast<int32_t>(0x67)};
constexpr ::OVR::OpenVR::EIOBufferError  OVR::OpenVR::EIOBufferError::IOBuffer_PathDoesNotExist{static_cast<int32_t>(0x68)};
constexpr ::OVR::OpenVR::EIOBufferError  OVR::OpenVR::EIOBufferError::IOBuffer_Permission{static_cast<int32_t>(0x69)};
