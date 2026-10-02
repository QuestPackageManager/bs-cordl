#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrPollEventCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(XrPollEventCallback)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrEventDataBaseHeader;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
class XrPollEventCallback;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*, "UnityEngine.XR.OpenXR.NativeTypes", "XrPollEventCallback");
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrPollEventCallback
class CORDL_TYPE XrPollEventCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6e3cac0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataBaseHeader* eventData, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6e3cae0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6e3caac, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataBaseHeader* eventData);

  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6e3ca30, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XrPollEventCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XrPollEventCallback", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XrPollEventCallback(XrPollEventCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XrPollEventCallback", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XrPollEventCallback(XrPollEventCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17505 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback) == 0x80, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
