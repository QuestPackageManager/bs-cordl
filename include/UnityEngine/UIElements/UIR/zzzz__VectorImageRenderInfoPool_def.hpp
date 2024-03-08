#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VectorImageRenderInfo_def.hpp"
CORDL_MODULE_EXPORT(VectorImageRenderInfoPool)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::UIElements::UIR {
class VectorImageRenderInfo;
}
namespace UnityEngine::UIElements::UIR {
class __VectorImageRenderInfoPool____c;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class VectorImageRenderInfoPool;
}
namespace UnityEngine::UIElements::UIR {
class __VectorImageRenderInfoPool____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::VectorImageRenderInfoPool);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::__VectorImageRenderInfoPool____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: ::VectorImageRenderInfoPool::<>c*
class CORDL_TYPE __VectorImageRenderInfoPool____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::UIElements::UIR::__VectorImageRenderInfoPool____c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0))::System::Func_1<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>* __9__0_0;

  /// @brief Field <>9__0_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_1, put = setStaticF___9__0_1))::System::Action_1<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>* __9__0_1;

  static inline ::UnityEngine::UIElements::UIR::__VectorImageRenderInfoPool____c* New_ctor();

  /// @brief Method <.ctor>b__0_0, addr 0x2f35130, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::VectorImageRenderInfo* __ctor_b__0_0();

  /// @brief Method <.ctor>b__0_1, addr 0x2f351d0, size 0x20, virtual false, abstract: false, final false
  inline void __ctor_b__0_1(::UnityEngine::UIElements::UIR::VectorImageRenderInfo* vectorImageInfo);

  /// @brief Method .ctor, addr 0x2f35128, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UIR::__VectorImageRenderInfoPool____c* getStaticF___9();

  static inline ::System::Func_1<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>* getStaticF___9__0_0();

  static inline ::System::Action_1<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>* getStaticF___9__0_1();

  static inline void setStaticF___9(::UnityEngine::UIElements::UIR::__VectorImageRenderInfoPool____c* value);

  static inline void setStaticF___9__0_0(::System::Func_1<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>* value);

  static inline void setStaticF___9__0_1(::System::Action_1<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VectorImageRenderInfoPool____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VectorImageRenderInfoPool____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VectorImageRenderInfoPool____c(__VectorImageRenderInfoPool____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VectorImageRenderInfoPool____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VectorImageRenderInfoPool____c(__VectorImageRenderInfoPool____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__VectorImageRenderInfoPool____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::VectorImageRenderInfoPool
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.UIR::VectorImageRenderInfoPool*
class CORDL_TYPE VectorImageRenderInfoPool : public ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::UIR::__VectorImageRenderInfoPool____c;

  static inline ::UnityEngine::UIElements::UIR::VectorImageRenderInfoPool* New_ctor();

  /// @brief Method .ctor, addr 0x2f34f3c, size 0x188, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VectorImageRenderInfoPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VectorImageRenderInfoPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VectorImageRenderInfoPool(VectorImageRenderInfoPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VectorImageRenderInfoPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VectorImageRenderInfoPool(VectorImageRenderInfoPool const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::VectorImageRenderInfoPool, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::VectorImageRenderInfoPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::VectorImageRenderInfoPool*, "UnityEngine.UIElements.UIR", "VectorImageRenderInfoPool");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::__VectorImageRenderInfoPool____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__VectorImageRenderInfoPool____c*, "UnityEngine.UIElements.UIR", "VectorImageRenderInfoPool/<>c");
