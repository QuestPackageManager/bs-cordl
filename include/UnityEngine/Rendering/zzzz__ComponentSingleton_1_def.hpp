#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ComponentSingleton_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ComponentSingleton_1)
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename TType> class ComponentSingleton_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::ComponentSingleton_1);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template <typename TType>
// Is value type: false
// CS Name: UnityEngine.Rendering.ComponentSingleton`1<TType>
class CORDL_TYPE ComponentSingleton_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) TType s_Instance;

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Release();

  static inline TType getStaticF_s_Instance();

  /// @brief Method get_instance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline TType get_instance();

  static inline void setStaticF_s_Instance(TType value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11853 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::ComponentSingleton_1, "UnityEngine.Rendering", "ComponentSingleton`1");
