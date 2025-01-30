#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/ComponentSingleton_1.hpp"
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
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::ResourceManagement::Util {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Util.ComponentSingleton`1<T>
class CORDL_TYPE ComponentSingleton_1 : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) T s_Instance;

  /// @brief Method Awake, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CreateNewSingleton, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T CreateNewSingleton();

  /// @brief Method DestroySingleton, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void DestroySingleton();

  /// @brief Method FindInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T FindInstance();

  /// @brief Method GetGameObjectName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetGameObjectName();

  static inline ::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline T getStaticF_s_Instance();

  /// @brief Method get_Exists, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool get_Exists();

  /// @brief Method get_Instance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T get_Instance();

  static inline void setStaticF_s_Instance(T value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComponentSingleton_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComponentSingleton_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComponentSingleton_1(ComponentSingleton_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComponentSingleton_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComponentSingleton_1(ComponentSingleton_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15623 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::Util::ComponentSingleton_1, "UnityEngine.ResourceManagement.Util", "ComponentSingleton`1");
