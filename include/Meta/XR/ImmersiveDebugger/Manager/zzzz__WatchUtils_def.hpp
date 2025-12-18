#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/WatchUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WatchUtils)
namespace Meta::XR::ImmersiveDebugger::Manager {
class WatchUtils___c;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
template <typename T> class Watch_1_ToDisplayStringSignature;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class Watch;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
namespace Meta::XR::ImmersiveDebugger {
class DebugMember;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Manager {
class WatchUtils;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class WatchUtils___c;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::WatchUtils);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::WatchUtils___c);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.WatchUtils/<>c
class CORDL_TYPE WatchUtils___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Meta::XR::ImmersiveDebugger::Manager::WatchUtils___c* __9;

  static inline ::Meta::XR::ImmersiveDebugger::Manager::WatchUtils___c* New_ctor();

  /// @brief Method <.cctor>b__2_0, addr 0x58b6d20, size 0x84, virtual false, abstract: false, final false
  inline void __cctor_b__2_0(float_t value, ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> valuesContainer);

  /// @brief Method <.cctor>b__2_1, addr 0x58b6da4, size 0x94, virtual false, abstract: false, final false
  inline void __cctor_b__2_1(bool value, ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> valuesContainer);

  /// @brief Method <.cctor>b__2_2, addr 0x58b6e38, size 0xd4, virtual false, abstract: false, final false
  inline void __cctor_b__2_2(::UnityEngine::Vector3 value, ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> valuesContainer);

  /// @brief Method <.cctor>b__2_3, addr 0x58b6f0c, size 0xa8, virtual false, abstract: false, final false
  inline void __cctor_b__2_3(::UnityEngine::Vector2 value, ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> valuesContainer);

  /// @brief Method <.cctor>b__2_4, addr 0x58b6fb4, size 0xa0, virtual false, abstract: false, final false
  inline void __cctor_b__2_4(::StringW value, ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> valuesContainer);

  /// @brief Method .ctor, addr 0x58b6d1c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Meta::XR::ImmersiveDebugger::Manager::WatchUtils___c* getStaticF___9();

  static inline void setStaticF___9(::Meta::XR::ImmersiveDebugger::Manager::WatchUtils___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WatchUtils___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WatchUtils___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WatchUtils___c(WatchUtils___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WatchUtils___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WatchUtils___c(WatchUtils___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18411 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::WatchUtils___c, 0x10>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.WatchUtils
class CORDL_TYPE WatchUtils : public ::System::Object {
public:
  // Declarations
  using __c = ::Meta::XR::ImmersiveDebugger::Manager::WatchUtils___c;

  /// @brief Field Types, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Types, put = setStaticF_Types)) ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* Types;

  /// @brief Method Create, addr 0x58b6848, size 0x23c, virtual false, abstract: false, final false
  static inline ::Meta::XR::ImmersiveDebugger::Manager::Watch* Create(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                      ::Meta::XR::ImmersiveDebugger::DebugMember* attribute);

  /// @brief Method FormatFloat, addr 0x58b6bf0, size 0xd8, virtual false, abstract: false, final false
  static inline ::StringW FormatFloat(float_t value);

  /// @brief Method Register, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Type* Register(::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>* toDisplayString, int32_t numberOfValues);

  /// @brief Method Register, addr 0x58b6a84, size 0x16c, virtual false, abstract: false, final false
  static inline ::System::Type* Register(::System::Type* type);

  /// @brief Method RegisterTexture, addr 0x58b6760, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::Type* RegisterTexture(::System::Type* type);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* getStaticF_Types();

  static inline void setStaticF_Types(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WatchUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WatchUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WatchUtils(WatchUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WatchUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WatchUtils(WatchUtils const&) = delete;

  /// @brief Field MaxLetterCount offset 0xffffffff size 0x4
  static constexpr int32_t MaxLetterCount{ static_cast<int32_t>(0x40) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18412 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::WatchUtils, 0x10>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::WatchUtils);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::WatchUtils*, "Meta.XR.ImmersiveDebugger.Manager", "WatchUtils");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::WatchUtils___c);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::WatchUtils___c*, "Meta.XR.ImmersiveDebugger.Manager", "WatchUtils/<>c");
