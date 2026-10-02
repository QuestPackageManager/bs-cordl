#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidInsets.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AndroidInsets)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine::Android {
class AndroidInsets;
}
// Write type traits
MARK_REF_T(::UnityEngine::Android::AndroidInsets*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Android::AndroidInsets*, "UnityEngine.Android", "AndroidInsets");
// [NativeHeader("Modules/AndroidJNI/Public/AndroidInsets.bindings.h")]
// [StaticAccessor("AndroidInsets", (UnityEngine.Bindings.StaticAccessorType)2)]
// [RequiredByNativeCode]
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Android {
// Is value type: false
// CS Name: UnityEngine.Android.AndroidInsets
class CORDL_TYPE AndroidInsets : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_NativeHandle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NativeHandle, put = __cordl_internal_set_m_NativeHandle)) ::System::IntPtr m_NativeHandle;

  /// [RequiredByNativeCode(GenerateProxy = true)]
  /// @brief Method SetNativeHandle, addr 0x6e82944, size 0x8, virtual false, abstract: false, final false
  inline void SetNativeHandle(::System::IntPtr ptr);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_NativeHandle() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_NativeHandle();

  constexpr void __cordl_internal_set_m_NativeHandle(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidInsets();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidInsets", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidInsets(AndroidInsets&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidInsets", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidInsets(AndroidInsets const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20665 };

  /// @brief Field m_NativeHandle, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_NativeHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Android::AndroidInsets, ___m_NativeHandle) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Android::AndroidInsets) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Android
