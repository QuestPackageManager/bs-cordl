#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Singleton_1)
// Forward declare root types
namespace RootMotion {
template <typename T> class Singleton_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::RootMotion::Singleton_1);
// Type: RootMotion::Singleton`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace RootMotion {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12396))
// CS Name: ::RootMotion::Singleton`1<T>*
class CORDL_TYPE Singleton_1 : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field sInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sInstance, put = setStaticF_sInstance)) T sInstance;

  static inline void setStaticF_sInstance(T value);

  static inline T getStaticF_sInstance();

  /// @brief Method get_instance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T get_instance();

  /// @brief Method Awake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Awake();

  static inline ::RootMotion::Singleton_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Singleton_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Singleton_1(Singleton_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Singleton_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Singleton_1(Singleton_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Singleton_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace RootMotion
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RootMotion::Singleton_1, "RootMotion", "Singleton`1");
