#pragma once
// IWYU pragma private; include "Zenject/ZenAutoInjecter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZenAutoInjecter)
namespace System {
class Object;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
struct ZenAutoInjecter_ContainerSources;
}
// Forward declare root types
namespace Zenject {
struct ZenAutoInjecter_ContainerSources;
}
namespace Zenject {
class ZenAutoInjecter;
}
// Write type traits
MARK_VAL_T(::Zenject::ZenAutoInjecter_ContainerSources);
MARK_REF_PTR_T(::Zenject::ZenAutoInjecter);
// Dependencies
namespace Zenject {
// Is value type: true
// CS Name: Zenject.ZenAutoInjecter/ContainerSources
struct CORDL_TYPE ZenAutoInjecter_ContainerSources {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ZenAutoInjecter_ContainerSources_Unwrapped
  enum struct __ZenAutoInjecter_ContainerSources_Unwrapped : int32_t {
    __E_SceneContext = static_cast<int32_t>(0x0),
    __E_ProjectContext = static_cast<int32_t>(0x1),
    __E_SearchHierarchy = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ZenAutoInjecter_ContainerSources_Unwrapped() const noexcept {
    return static_cast<__ZenAutoInjecter_ContainerSources_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenAutoInjecter_ContainerSources();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ZenAutoInjecter_ContainerSources(int32_t value__) noexcept;

  /// @brief Field ProjectContext value: I32(1)
  static ::Zenject::ZenAutoInjecter_ContainerSources const ProjectContext;

  /// @brief Field SceneContext value: I32(0)
  static ::Zenject::ZenAutoInjecter_ContainerSources const SceneContext;

  /// @brief Field SearchHierarchy value: I32(2)
  static ::Zenject::ZenAutoInjecter_ContainerSources const SearchHierarchy;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12701 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ZenAutoInjecter_ContainerSources, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::ZenAutoInjecter_ContainerSources, 0x4>, "Size mismatch!");

} // namespace Zenject
// Dependencies UnityEngine.MonoBehaviour, Zenject.ZenAutoInjecter::ContainerSources
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ZenAutoInjecter
class CORDL_TYPE ZenAutoInjecter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ContainerSources = ::Zenject::ZenAutoInjecter_ContainerSources;

  __declspec(property(get = get_ContainerSource, put = set_ContainerSource)) ::Zenject::ZenAutoInjecter_ContainerSources ContainerSource;

  /// @brief Field _containerSource, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__containerSource, put = __cordl_internal_set__containerSource)) ::Zenject::ZenAutoInjecter_ContainerSources _containerSource;

  /// @brief Field _hasInjected, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__hasInjected, put = __cordl_internal_set__hasInjected)) bool _hasInjected;

  /// @brief Method Awake, addr 0x4b55b28, size 0x48, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Construct, addr 0x4b55ae4, size 0x44, virtual false, abstract: false, final false
  inline void Construct();

  /// @brief Method GetContainerForCurrentScene, addr 0x4b55cc8, size 0x90, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* GetContainerForCurrentScene();

  /// @brief Method LookupContainer, addr 0x4b55b70, size 0x158, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* LookupContainer();

  static inline ::Zenject::ZenAutoInjecter* New_ctor();

  constexpr ::Zenject::ZenAutoInjecter_ContainerSources const& __cordl_internal_get__containerSource() const;

  constexpr ::Zenject::ZenAutoInjecter_ContainerSources& __cordl_internal_get__containerSource();

  constexpr bool const& __cordl_internal_get__hasInjected() const;

  constexpr bool& __cordl_internal_get__hasInjected();

  constexpr void __cordl_internal_set__containerSource(::Zenject::ZenAutoInjecter_ContainerSources value);

  constexpr void __cordl_internal_set__hasInjected(bool value);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b55de8, size 0x250, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method __zenInjectMethod0, addr 0x4b55d68, size 0x80, virtual false, abstract: false, final false
  static inline void __zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1);

  /// @brief Method .ctor, addr 0x4b55d58, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ContainerSource, addr 0x4b55ad4, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::ZenAutoInjecter_ContainerSources get_ContainerSource();

  /// @brief Method set_ContainerSource, addr 0x4b55adc, size 0x8, virtual false, abstract: false, final false
  inline void set_ContainerSource(::Zenject::ZenAutoInjecter_ContainerSources value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenAutoInjecter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZenAutoInjecter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenAutoInjecter(ZenAutoInjecter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenAutoInjecter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenAutoInjecter(ZenAutoInjecter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12702 };

  /// @brief Field _containerSource, offset: 0x20, size: 0x4, def value: None
  ::Zenject::ZenAutoInjecter_ContainerSources ____containerSource;

  /// @brief Field _hasInjected, offset: 0x24, size: 0x1, def value: None
  bool ____hasInjected;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ZenAutoInjecter, ____containerSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::ZenAutoInjecter, ____hasInjected) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::ZenAutoInjecter, 0x28>, "Size mismatch!");

} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenAutoInjecter_ContainerSources, "Zenject", "ZenAutoInjecter/ContainerSources");
NEED_NO_BOX(::Zenject::ZenAutoInjecter);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenAutoInjecter*, "Zenject", "ZenAutoInjecter");
