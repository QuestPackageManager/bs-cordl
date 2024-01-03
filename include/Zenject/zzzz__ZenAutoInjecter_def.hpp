#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__ZenAutoInjecter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZenAutoInjecter)
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
struct __ZenAutoInjecter__ContainerSources;
}
namespace System {
class Object;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
struct __ZenAutoInjecter__ContainerSources;
}
namespace Zenject {
class ZenAutoInjecter;
}
// Write type traits
MARK_VAL_T(::Zenject::__ZenAutoInjecter__ContainerSources);
MARK_REF_PTR_T(::Zenject::ZenAutoInjecter);
// Type: ::ContainerSources
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11359))
// CS Name: ::ZenAutoInjecter::ContainerSources
struct CORDL_TYPE __ZenAutoInjecter__ContainerSources {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ZenAutoInjecter__ContainerSources_Unwrapped
  enum struct ____ZenAutoInjecter__ContainerSources_Unwrapped : int32_t {
    __E_SceneContext = static_cast<int32_t>(0x0),
    __E_ProjectContext = static_cast<int32_t>(0x1),
    __E_SearchHierarchy = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ZenAutoInjecter__ContainerSources_Unwrapped() const noexcept {
    return static_cast<____ZenAutoInjecter__ContainerSources_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ZenAutoInjecter__ContainerSources(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ZenAutoInjecter__ContainerSources();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field SceneContext value: static_cast<int32_t>(0x0)
  static ::Zenject::__ZenAutoInjecter__ContainerSources const SceneContext;

  /// @brief Field ProjectContext value: static_cast<int32_t>(0x1)
  static ::Zenject::__ZenAutoInjecter__ContainerSources const ProjectContext;

  /// @brief Field SearchHierarchy value: static_cast<int32_t>(0x2)
  static ::Zenject::__ZenAutoInjecter__ContainerSources const SearchHierarchy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ZenAutoInjecter__ContainerSources, 0x4>, "Size mismatch!");

static_assert(offsetof(::Zenject::__ZenAutoInjecter__ContainerSources, value__) == 0x0, "Offset mismatch!");

} // namespace Zenject
// Type: Zenject::ZenAutoInjecter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 29, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11359)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11360))
// CS Name: ::Zenject::ZenAutoInjecter*
class CORDL_TYPE ZenAutoInjecter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ContainerSources = ::Zenject::__ZenAutoInjecter__ContainerSources;

  /// @brief Field _containerSource, offset 0x18, size 0x4
  __declspec(property(get = __get__containerSource, put = __set__containerSource))::Zenject::__ZenAutoInjecter__ContainerSources _containerSource;

  /// @brief Field _hasInjected, offset 0x1c, size 0x1
  __declspec(property(get = __get__hasInjected, put = __set__hasInjected)) bool _hasInjected;

  __declspec(property(get = get_ContainerSource, put = set_ContainerSource))::Zenject::__ZenAutoInjecter__ContainerSources ContainerSource;

  constexpr ::Zenject::__ZenAutoInjecter__ContainerSources& __get__containerSource();

  constexpr ::Zenject::__ZenAutoInjecter__ContainerSources const& __get__containerSource() const;

  constexpr void __set__containerSource(::Zenject::__ZenAutoInjecter__ContainerSources value);

  constexpr bool& __get__hasInjected();

  constexpr bool const& __get__hasInjected() const;

  constexpr void __set__hasInjected(bool value);

  /// @brief Method get_ContainerSource, addr 0x2f1fc6c, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::__ZenAutoInjecter__ContainerSources get_ContainerSource();

  /// @brief Method set_ContainerSource, addr 0x2f1fc74, size 0x8, virtual false, abstract: false, final false
  inline void set_ContainerSource(::Zenject::__ZenAutoInjecter__ContainerSources value);

  /// @brief Method Construct, addr 0x2f1fc7c, size 0x44, virtual false, abstract: false, final false
  inline void Construct();

  /// @brief Method Awake, addr 0x2f1fcc0, size 0x48, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method LookupContainer, addr 0x2f1fd08, size 0x158, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* LookupContainer();

  /// @brief Method GetContainerForCurrentScene, addr 0x2f1fe60, size 0x90, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* GetContainerForCurrentScene();

  static inline ::Zenject::ZenAutoInjecter* New_ctor();

  /// @brief Method .ctor, addr 0x2f1fef0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method __zenInjectMethod0, addr 0x2f1ff00, size 0x80, virtual false, abstract: false, final false
  static inline void __zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2f1ff80, size 0x254, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "ZenAutoInjecter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenAutoInjecter(ZenAutoInjecter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenAutoInjecter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenAutoInjecter(ZenAutoInjecter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenAutoInjecter();

public:
  /// @brief Field _containerSource, offset: 0x18, size: 0x4, def value: None
  ::Zenject::__ZenAutoInjecter__ContainerSources ____containerSource;

  /// @brief Field _hasInjected, offset: 0x1c, size: 0x1, def value: None
  bool ____hasInjected;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ZenAutoInjecter, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::ZenAutoInjecter, ____containerSource) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::ZenAutoInjecter, ____hasInjected) == 0x1c, "Offset mismatch!");

} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ZenAutoInjecter__ContainerSources, "Zenject", "ZenAutoInjecter/ContainerSources");
NEED_NO_BOX(::Zenject::ZenAutoInjecter);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenAutoInjecter*, "Zenject", "ZenAutoInjecter");
