#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/GradientRemapPool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_def.hpp"
CORDL_MODULE_EXPORT(GradientRemapPool)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::UIElements::UIR {
class GradientRemapPool___c;
}
namespace UnityEngine::UIElements::UIR {
class GradientRemap;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class GradientRemapPool;
}
namespace UnityEngine::UIElements::UIR {
class GradientRemapPool___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::GradientRemapPool);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::GradientRemapPool___c);
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.GradientRemapPool/<>c
class CORDL_TYPE GradientRemapPool___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::UIR::GradientRemapPool___c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::System::Func_1<::UnityEngine::UIElements::UIR::GradientRemap*>* __9__0_0;

  /// @brief Field <>9__0_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_1, put = setStaticF___9__0_1)) ::System::Action_1<::UnityEngine::UIElements::UIR::GradientRemap*>* __9__0_1;

  static inline ::UnityEngine::UIElements::UIR::GradientRemapPool___c* New_ctor();

  /// @brief Method <.ctor>b__0_0, addr 0x49b493c, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::GradientRemap* __ctor_b__0_0();

  /// @brief Method <.ctor>b__0_1, addr 0x49b49d4, size 0x14, virtual false, abstract: false, final false
  inline void __ctor_b__0_1(::UnityEngine::UIElements::UIR::GradientRemap* gradientRemap);

  /// @brief Method .ctor, addr 0x49b4934, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UIR::GradientRemapPool___c* getStaticF___9();

  static inline ::System::Func_1<::UnityEngine::UIElements::UIR::GradientRemap*>* getStaticF___9__0_0();

  static inline ::System::Action_1<::UnityEngine::UIElements::UIR::GradientRemap*>* getStaticF___9__0_1();

  static inline void setStaticF___9(::UnityEngine::UIElements::UIR::GradientRemapPool___c* value);

  static inline void setStaticF___9__0_0(::System::Func_1<::UnityEngine::UIElements::UIR::GradientRemap*>* value);

  static inline void setStaticF___9__0_1(::System::Action_1<::UnityEngine::UIElements::UIR::GradientRemap*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GradientRemapPool___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GradientRemapPool___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GradientRemapPool___c(GradientRemapPool___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GradientRemapPool___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GradientRemapPool___c(GradientRemapPool___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6411 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::GradientRemapPool___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies UnityEngine.UIElements.UIR.LinkedPool`1<T>
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.GradientRemapPool
class CORDL_TYPE GradientRemapPool : public ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::GradientRemap*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::UIR::GradientRemapPool___c;

  static inline ::UnityEngine::UIElements::UIR::GradientRemapPool* New_ctor();

  /// @brief Method .ctor, addr 0x49b4754, size 0x184, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GradientRemapPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GradientRemapPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GradientRemapPool(GradientRemapPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GradientRemapPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GradientRemapPool(GradientRemapPool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6412 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::GradientRemapPool, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::GradientRemapPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::GradientRemapPool*, "UnityEngine.UIElements.UIR", "GradientRemapPool");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::GradientRemapPool___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::GradientRemapPool___c*, "UnityEngine.UIElements.UIR", "GradientRemapPool/<>c");
