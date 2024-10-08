#pragma once
// IWYU pragma private; include "UnityEngine/Pool/IObjectPool_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IObjectPool_1)
// Forward declare root types
namespace UnityEngine::Pool {
template <typename T> class IObjectPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Pool::IObjectPool_1);
// Type: UnityEngine.Pool::IObjectPool`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Pool {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.Pool::IObjectPool`1<T>*
class CORDL_TYPE IObjectPool_1 {
public:
  // Declarations
  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Release(T element);

  // Ctor Parameters [CppParam { name: "", ty: "IObjectPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IObjectPool_1(IObjectPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IObjectPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IObjectPool_1(IObjectPool_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11116 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Pool
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Pool::IObjectPool_1, "UnityEngine.Pool", "IObjectPool`1");
