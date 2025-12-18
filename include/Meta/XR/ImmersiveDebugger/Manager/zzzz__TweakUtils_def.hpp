#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/TweakUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TweakUtils)
namespace Meta::XR::ImmersiveDebugger::Manager {
class TweakEnum;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class TweakUtils___c;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class Tweak;
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
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Manager {
class TweakUtils;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class TweakUtils___c;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::TweakUtils);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::TweakUtils___c);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.TweakUtils/<>c
class CORDL_TYPE TweakUtils___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Meta::XR::ImmersiveDebugger::Manager::TweakUtils___c* __9;

  static inline ::Meta::XR::ImmersiveDebugger::Manager::TweakUtils___c* New_ctor();

  /// @brief Method <.cctor>b__4_0, addr 0x58b6198, size 0x4, virtual false, abstract: false, final false
  inline float_t __cctor_b__4_0(float_t f);

  /// @brief Method <.cctor>b__4_1, addr 0x58b619c, size 0x44, virtual false, abstract: false, final false
  inline float_t __cctor_b__4_1(int32_t start, int32_t end, int32_t value);

  /// @brief Method <.cctor>b__4_2, addr 0x58b61e0, size 0x108, virtual false, abstract: false, final false
  inline int32_t __cctor_b__4_2(int32_t start, int32_t end, float_t tween);

  /// @brief Method <.cctor>b__4_3, addr 0x58b62e8, size 0x1c, virtual false, abstract: false, final false
  inline int32_t __cctor_b__4_3(float_t f);

  /// @brief Method <.cctor>b__4_4, addr 0x58b6304, size 0x14, virtual false, abstract: false, final false
  inline float_t __cctor_b__4_4(bool _, bool __param_1, bool value);

  /// @brief Method <.cctor>b__4_5, addr 0x58b6318, size 0xc, virtual false, abstract: false, final false
  inline bool __cctor_b__4_5(bool _, bool __param_1, float_t tween);

  /// @brief Method <.cctor>b__4_6, addr 0x58b6324, size 0xc, virtual false, abstract: false, final false
  inline bool __cctor_b__4_6(float_t f);

  /// @brief Method .ctor, addr 0x58b6194, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Meta::XR::ImmersiveDebugger::Manager::TweakUtils___c* getStaticF___9();

  static inline void setStaticF___9(::Meta::XR::ImmersiveDebugger::Manager::TweakUtils___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TweakUtils___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TweakUtils___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TweakUtils___c(TweakUtils___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TweakUtils___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TweakUtils___c(TweakUtils___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18405 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::TweakUtils___c, 0x10>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.TweakUtils
class CORDL_TYPE TweakUtils : public ::System::Object {
public:
  // Declarations
  using __c = ::Meta::XR::ImmersiveDebugger::Manager::TweakUtils___c;

  /// @brief Field _supportsValueRange, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__supportsValueRange, put = setStaticF__supportsValueRange)) ::System::Collections::Generic::HashSet_1<::System::Type*>* _supportsValueRange;

  /// @brief Field _types, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__types, put = setStaticF__types)) ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* _types;

  /// @brief Method Create, addr 0x58b5710, size 0x21c, virtual false, abstract: false, final false
  static inline ::Meta::XR::ImmersiveDebugger::Manager::Tweak* Create(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::DebugMember* attribute,
                                                                      ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle);

  /// @brief Method Create, addr 0x58b592c, size 0x284, virtual false, abstract: false, final false
  static inline ::Meta::XR::ImmersiveDebugger::Manager::TweakEnum* Create(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::DebugMember* attribute,
                                                                          ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle, ::System::Type* enumType);

  /// @brief Method IsMemberValidForTweak, addr 0x58b5bb0, size 0x184, virtual false, abstract: false, final false
  static inline bool IsMemberValidForTweak(::System::Reflection::MemberInfo* member);

  /// @brief Method IsTypeSupported, addr 0x58b5550, size 0x10c, virtual false, abstract: false, final false
  static inline bool IsTypeSupported(::System::Type* type);

  /// @brief Method IsTypeSupportsValueRange, addr 0x58b565c, size 0xb4, virtual false, abstract: false, final false
  static inline bool IsTypeSupportsValueRange(::System::Type* t);

  /// @brief Method ProcessMinMaxRange, addr 0x58b5d34, size 0x260, virtual false, abstract: false, final false
  static inline void ProcessMinMaxRange(::System::Reflection::MemberInfo* member, ::Meta::XR::ImmersiveDebugger::DebugMember* attribute, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instance);

  /// @brief Method Register, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Register(::System::Func_4<T, T, T, float_t>* inverseLerp, ::System::Func_4<T, T, float_t, T>* lerp, ::System::Func_2<float_t, T>* fromFloat);

  /// @brief Method RoundToNearest, addr 0x58b5f94, size 0x1ac, virtual false, abstract: false, final false
  static inline float_t RoundToNearest(float_t value, ::StringW op);

  static inline ::System::Collections::Generic::HashSet_1<::System::Type*>* getStaticF__supportsValueRange();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* getStaticF__types();

  static inline void setStaticF__supportsValueRange(::System::Collections::Generic::HashSet_1<::System::Type*>* value);

  static inline void setStaticF__types(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TweakUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TweakUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TweakUtils(TweakUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TweakUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TweakUtils(TweakUtils const&) = delete;

  /// @brief Field Max offset 0xffffffff size 0x8
  static constexpr ::ConstString Max{ u"max" };

  /// @brief Field Min offset 0xffffffff size 0x8
  static constexpr ::ConstString Min{ u"min" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18406 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::TweakUtils, 0x10>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::TweakUtils);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::TweakUtils*, "Meta.XR.ImmersiveDebugger.Manager", "TweakUtils");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::TweakUtils___c);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::TweakUtils___c*, "Meta.XR.ImmersiveDebugger.Manager", "TweakUtils/<>c");
