#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientRemap_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_def.hpp"
CORDL_MODULE_EXPORT(GradientRemapPool)
namespace UnityEngine::UIElements::UIR {
class __GradientRemapPool____c;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::UIElements::UIR {
class GradientRemap;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class GradientRemapPool;
}
namespace UnityEngine::UIElements::UIR {
class __GradientRemapPool____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::GradientRemapPool);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::__GradientRemapPool____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7420))
// CS Name: ::GradientRemapPool::<>c*
class CORDL_TYPE __GradientRemapPool____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::UIElements::UIR::__GradientRemapPool____c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0))::System::Func_1<::UnityEngine::UIElements::UIR::GradientRemap*>* __9__0_0;

  /// @brief Field <>9__0_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_1, put = setStaticF___9__0_1))::System::Action_1<::UnityEngine::UIElements::UIR::GradientRemap*>* __9__0_1;

  static inline void setStaticF___9(::UnityEngine::UIElements::UIR::__GradientRemapPool____c* value);

  static inline ::UnityEngine::UIElements::UIR::__GradientRemapPool____c* getStaticF___9();

  static inline void setStaticF___9__0_0(::System::Func_1<::UnityEngine::UIElements::UIR::GradientRemap*>* value);

  static inline ::System::Func_1<::UnityEngine::UIElements::UIR::GradientRemap*>* getStaticF___9__0_0();

  static inline void setStaticF___9__0_1(::System::Action_1<::UnityEngine::UIElements::UIR::GradientRemap*>* value);

  static inline ::System::Action_1<::UnityEngine::UIElements::UIR::GradientRemap*>* getStaticF___9__0_1();

  static inline ::UnityEngine::UIElements::UIR::__GradientRemapPool____c* New_ctor();

  /// @brief Method .ctor addr 0x2dcd0a4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <.ctor>b__0_0 addr 0x2dcd0ac size 0x58 virtual false final false
  inline ::UnityEngine::UIElements::UIR::GradientRemap* __ctor_b__0_0();

  /// @brief Method <.ctor>b__0_1 addr 0x2dcd14c size 0x14 virtual false final false
  inline void __ctor_b__0_1(::UnityEngine::UIElements::UIR::GradientRemap* gradientRemap);

  // Ctor Parameters [CppParam { name: "", ty: "__GradientRemapPool____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GradientRemapPool____c(__GradientRemapPool____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GradientRemapPool____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GradientRemapPool____c(__GradientRemapPool____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GradientRemapPool____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__GradientRemapPool____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::GradientRemapPool
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7400)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7400), inst: 313 }),
// TypeDefinitionIndex(TypeDefinitionIndex(7422))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7421)) CS Name: ::UnityEngine.UIElements.UIR::GradientRemapPool*
class CORDL_TYPE GradientRemapPool : public ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::GradientRemap*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::UIR::__GradientRemapPool____c;

  static inline ::UnityEngine::UIElements::UIR::GradientRemapPool* New_ctor();

  /// @brief Method .ctor addr 0x2dcceb8 size 0x188 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GradientRemapPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GradientRemapPool(GradientRemapPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GradientRemapPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GradientRemapPool(GradientRemapPool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GradientRemapPool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::GradientRemapPool, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::GradientRemapPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::GradientRemapPool*, "UnityEngine.UIElements.UIR", "GradientRemapPool");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::__GradientRemapPool____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__GradientRemapPool____c*, "UnityEngine.UIElements.UIR", "GradientRemapPool/<>c");
