#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ControlHeader.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Audio/zzzz__Handle_impl.hpp"
#include "UnityEngine/Audio/zzzz__ControlHeader_def.hpp"
// Ctor Parameters [CppParam { name: "Handle", ty: "::Unity::Audio::Handle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ManagedTransport", ty: "::System::IntPtr",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::ControlHeader::ControlHeader(::Unity::Audio::Handle Handle, ::System::IntPtr ManagedTransport) noexcept {
  this->Handle = Handle;
  this->ManagedTransport = ManagedTransport;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ControlHeader::ControlHeader() {}
