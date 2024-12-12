#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/LowLevel/AndroidDeviceCapabilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidInputSource_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidDeviceCapabilities)
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidAxis;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
class AndroidDeviceCapabilities___c;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
class AndroidDeviceCapabilities___c;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidDeviceCapabilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c);
MARK_VAL_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities);
// Dependencies System.Object
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidDeviceCapabilities/<>c
class CORDL_TYPE AndroidDeviceCapabilities___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0)) ::System::Func_2<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis, ::StringW>* __9__8_0;

  static inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c* New_ctor();

  /// @brief Method <ToString>b__8_0, addr 0x46055cc, size 0x64, virtual false, abstract: false, final false
  inline ::StringW _ToString_b__8_0(::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis i);

  /// @brief Method .ctor, addr 0x46055c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis, ::StringW>* getStaticF___9__8_0();

  static inline void setStaticF___9(::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c* value);

  static inline void setStaticF___9__8_0(::System::Func_2<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidDeviceCapabilities___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidDeviceCapabilities___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidDeviceCapabilities___c(AndroidDeviceCapabilities___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidDeviceCapabilities___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidDeviceCapabilities___c(AndroidDeviceCapabilities___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6856 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android::LowLevel
// Dependencies UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidDeviceCapabilities
struct CORDL_TYPE AndroidDeviceCapabilities {
public:
  // Declarations
  using __c = ::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c;

  /// @brief Method FromJson, addr 0x4604f94, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities FromJson(::StringW json);

  /// @brief Method ToJson, addr 0x4605184, size 0x6c, virtual false, abstract: false, final false
  inline ::StringW ToJson();

  /// @brief Method ToString, addr 0x46051f0, size 0x378, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidDeviceCapabilities();

  // Ctor Parameters [CppParam { name: "deviceDescriptor", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "productId", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "vendorId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isVirtual", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "motionAxes", ty:
  // "::ArrayW<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis,::Array<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>*>", modifiers: "", def_value: None }, CppParam { name:
  // "inputSources", ty: "::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource", modifiers: "", def_value: None }]
  constexpr AndroidDeviceCapabilities(::StringW deviceDescriptor, int32_t productId, int32_t vendorId, bool isVirtual,
                                      ::ArrayW<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis, ::Array<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>*> motionAxes,
                                      ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource inputSources) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6857 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field deviceDescriptor, offset: 0x0, size: 0x8, def value: None
  ::StringW deviceDescriptor;

  /// @brief Field productId, offset: 0x8, size: 0x4, def value: None
  int32_t productId;

  /// @brief Field vendorId, offset: 0xc, size: 0x4, def value: None
  int32_t vendorId;

  /// @brief Field isVirtual, offset: 0x10, size: 0x1, def value: None
  bool isVirtual;

  /// @brief Field motionAxes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis, ::Array<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>*> motionAxes;

  /// @brief Field inputSources, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource inputSources;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities, deviceDescriptor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities, productId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities, vendorId) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities, isVirtual) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities, motionAxes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities, inputSources) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities, 0x28>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c*, "UnityEngine.InputSystem.Android.LowLevel", "AndroidDeviceCapabilities/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities, "UnityEngine.InputSystem.Android.LowLevel", "AndroidDeviceCapabilities");
