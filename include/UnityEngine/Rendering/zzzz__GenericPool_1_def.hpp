#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GenericPool_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GenericPool_1)
namespace UnityEngine::Rendering {
template <typename T> struct ObjectPool_1_PooledObject;
}
namespace UnityEngine::Rendering {
template <typename T> class ObjectPool_1;
}
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename T> class GenericPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::GenericPool_1);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.GenericPool`1<T>
class CORDL_TYPE GenericPool_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Pool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Pool, put = setStaticF_s_Pool)) ::UnityEngine::Rendering::ObjectPool_1<T>* s_Pool;

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ObjectPool_1_PooledObject<T> Get(::ByRef<T> value);

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T Get();

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Release(T toRelease);

  static inline ::UnityEngine::Rendering::ObjectPool_1<T>* getStaticF_s_Pool();

  static inline void setStaticF_s_Pool(::UnityEngine::Rendering::ObjectPool_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenericPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericPool_1(GenericPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericPool_1(GenericPool_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11895 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::GenericPool_1, "UnityEngine.Rendering", "GenericPool`1");
