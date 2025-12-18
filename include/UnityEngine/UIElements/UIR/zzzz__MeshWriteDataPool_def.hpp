#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/MeshWriteDataPool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ImplicitPool_1_def.hpp"
CORDL_MODULE_EXPORT(MeshWriteDataPool)
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::UIElements::UIR {
class MeshWriteDataPool___c;
}
namespace UnityEngine::UIElements {
class MeshWriteData;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class MeshWriteDataPool;
}
namespace UnityEngine::UIElements::UIR {
class MeshWriteDataPool___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::MeshWriteDataPool);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::MeshWriteDataPool___c);
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.MeshWriteDataPool/<>c
class CORDL_TYPE MeshWriteDataPool___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::UIR::MeshWriteDataPool___c* __9;

  static inline ::UnityEngine::UIElements::UIR::MeshWriteDataPool___c* New_ctor();

  /// @brief Method <.cctor>b__2_0, addr 0x6b1a8e8, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MeshWriteData* __cctor_b__2_0();

  /// @brief Method .ctor, addr 0x6b1a8e4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UIR::MeshWriteDataPool___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::UIR::MeshWriteDataPool___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshWriteDataPool___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshWriteDataPool___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshWriteDataPool___c(MeshWriteDataPool___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshWriteDataPool___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshWriteDataPool___c(MeshWriteDataPool___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5326 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::MeshWriteDataPool___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies UnityEngine.UIElements.UIR.ImplicitPool`1<T>
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.MeshWriteDataPool
class CORDL_TYPE MeshWriteDataPool : public ::UnityEngine::UIElements::UIR::ImplicitPool_1<::UnityEngine::UIElements::MeshWriteData*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::UIR::MeshWriteDataPool___c;

  /// @brief Field k_CreateAction, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_CreateAction, put = setStaticF_k_CreateAction)) ::System::Func_1<::UnityEngine::UIElements::MeshWriteData*>* k_CreateAction;

  static inline ::UnityEngine::UIElements::UIR::MeshWriteDataPool* New_ctor();

  /// @brief Method .ctor, addr 0x6b1a738, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Func_1<::UnityEngine::UIElements::MeshWriteData*>* getStaticF_k_CreateAction();

  static inline void setStaticF_k_CreateAction(::System::Func_1<::UnityEngine::UIElements::MeshWriteData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshWriteDataPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshWriteDataPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshWriteDataPool(MeshWriteDataPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshWriteDataPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshWriteDataPool(MeshWriteDataPool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5327 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::MeshWriteDataPool, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::MeshWriteDataPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::MeshWriteDataPool*, "UnityEngine.UIElements.UIR", "MeshWriteDataPool");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::MeshWriteDataPool___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::MeshWriteDataPool___c*, "UnityEngine.UIElements.UIR", "MeshWriteDataPool/<>c");
