#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphGraphicsAutomatedTests.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RenderGraphGraphicsAutomatedTests)
namespace System {
template <typename T> class Predicate_1;
}
namespace UnityEngine::Rendering {
class RenderGraphGraphicsAutomatedTests___c;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RenderGraphGraphicsAutomatedTests;
}
namespace UnityEngine::Rendering {
class RenderGraphGraphicsAutomatedTests___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphGraphicsAutomatedTests);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphGraphicsAutomatedTests___c);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphGraphicsAutomatedTests/<>c
class CORDL_TYPE RenderGraphGraphicsAutomatedTests___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::RenderGraphGraphicsAutomatedTests___c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Predicate_1<::StringW>* __9__1_0;

  static inline ::UnityEngine::Rendering::RenderGraphGraphicsAutomatedTests___c* New_ctor();

  /// @brief Method .ctor, addr 0x661ccac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_activatedFromCommandLine>b__1_0, addr 0x661ccb0, size 0x4c, virtual false, abstract: false, final false
  inline bool _get_activatedFromCommandLine_b__1_0(::StringW arg);

  static inline ::UnityEngine::Rendering::RenderGraphGraphicsAutomatedTests___c* getStaticF___9();

  static inline ::System::Predicate_1<::StringW>* getStaticF___9__1_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::RenderGraphGraphicsAutomatedTests___c* value);

  static inline void setStaticF___9__1_0(::System::Predicate_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphGraphicsAutomatedTests___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphGraphicsAutomatedTests___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphGraphicsAutomatedTests___c(RenderGraphGraphicsAutomatedTests___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphGraphicsAutomatedTests___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphGraphicsAutomatedTests___c(RenderGraphGraphicsAutomatedTests___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12541 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphGraphicsAutomatedTests___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphGraphicsAutomatedTests
class CORDL_TYPE RenderGraphGraphicsAutomatedTests : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::RenderGraphGraphicsAutomatedTests___c;

  /// @brief Field <enabled>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__enabled_k__BackingField, put = setStaticF__enabled_k__BackingField)) bool _enabled_k__BackingField;

  static inline bool getStaticF__enabled_k__BackingField();

  /// @brief Method get_activatedFromCommandLine, addr 0x661ca9c, size 0x10c, virtual false, abstract: false, final false
  static inline bool get_activatedFromCommandLine();

  /// @brief Method get_enabled, addr 0x661cba8, size 0x5c, virtual false, abstract: false, final false
  static inline bool get_enabled();

  static inline void setStaticF__enabled_k__BackingField(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphGraphicsAutomatedTests();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphGraphicsAutomatedTests", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphGraphicsAutomatedTests(RenderGraphGraphicsAutomatedTests&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphGraphicsAutomatedTests", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphGraphicsAutomatedTests(RenderGraphGraphicsAutomatedTests const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12542 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphGraphicsAutomatedTests, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphGraphicsAutomatedTests);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphGraphicsAutomatedTests*, "UnityEngine.Rendering", "RenderGraphGraphicsAutomatedTests");
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphGraphicsAutomatedTests___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphGraphicsAutomatedTests___c*, "UnityEngine.Rendering", "RenderGraphGraphicsAutomatedTests/<>c");
