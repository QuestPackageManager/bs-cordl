#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ComponentSingleton_1)
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
template <typename T> class ComponentSingleton_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ResourceManagement::Util::ComponentSingleton_1);
// Type: UnityEngine.ResourceManagement.Util::ComponentSingleton`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14237))
// CS Name: ::UnityEngine.ResourceManagement.Util::ComponentSingleton`1<T>*
class CORDL_TYPE ComponentSingleton_1 : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) T s_Instance;

  static inline void setStaticF_s_Instance(T value);

  static inline T getStaticF_s_Instance();

  /// @brief Method get_Exists addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline bool get_Exists();

  /// @brief Method get_Instance addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline T get_Instance();

  /// @brief Method FindInstance addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline T FindInstance();

  /// @brief Method GetGameObjectName addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW GetGameObjectName();

  /// @brief Method CreateNewSingleton addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline T CreateNewSingleton();

  /// @brief Method Awake addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Awake();

  /// @brief Method DestroySingleton addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline void DestroySingleton();

  static inline ::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ComponentSingleton_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComponentSingleton_1(ComponentSingleton_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComponentSingleton_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComponentSingleton_1(ComponentSingleton_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComponentSingleton_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::Util::ComponentSingleton_1, "UnityEngine.ResourceManagement.Util", "ComponentSingleton`1");
