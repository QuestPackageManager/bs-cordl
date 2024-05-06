#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TypeTable)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
class __TypeTable____c;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class __TypeTable____c;
}
namespace UnityEngine::InputSystem::Utilities {
struct TypeTable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::__TypeTable____c);
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::TypeTable);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: ::TypeTable::<>c*
class CORDL_TYPE __TypeTable____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::InputSystem::Utilities::__TypeTable____c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0))::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* __9__2_0;

  static inline ::UnityEngine::InputSystem::Utilities::__TypeTable____c* New_ctor();

  /// @brief Method .ctor, addr 0x30cb140, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_names>b__2_0, addr 0x30cb148, size 0x24, virtual false, abstract: false, final false
  inline ::StringW _get_names_b__2_0(::UnityEngine::InputSystem::Utilities::InternedString x);

  static inline ::UnityEngine::InputSystem::Utilities::__TypeTable____c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* getStaticF___9__2_0();

  static inline void setStaticF___9(::UnityEngine::InputSystem::Utilities::__TypeTable____c* value);

  static inline void setStaticF___9__2_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeTable____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeTable____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeTable____c(__TypeTable____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeTable____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeTable____c(__TypeTable____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::__TypeTable____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::TypeTable
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.Utilities::TypeTable
struct CORDL_TYPE TypeTable {
public:
  // Declarations
  using __c = ::UnityEngine::InputSystem::Utilities::__TypeTable____c;

  __declspec(property(get = get_internedNames))::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* internedNames;

  __declspec(property(get = get_names))::System::Collections::Generic::IEnumerable_1<::StringW>* names;

  /// @brief Method AddTypeRegistration, addr 0x30cae7c, size 0x168, virtual false, abstract: false, final false
  inline void AddTypeRegistration(::StringW name, ::System::Type* type);

  /// @brief Method FindNameForType, addr 0x30cac5c, size 0x220, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString FindNameForType(::System::Type* type);

  /// @brief Method Initialize, addr 0x30cabe8, size 0x74, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method LookupTypeRegistration, addr 0x30cafe4, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Type* LookupTypeRegistration(::StringW name);

  /// @brief Method get_internedNames, addr 0x30cab98, size 0x50, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* get_internedNames();

  /// @brief Method get_names, addr 0x30caa70, size 0x128, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_names();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeTable();

  // Ctor Parameters [CppParam { name: "table", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>*", modifiers: "", def_value:
  // None }]
  constexpr TypeTable(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*>* table) noexcept;

  /// @brief Field table, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*>* table;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::TypeTable, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::TypeTable, table) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::__TypeTable____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::__TypeTable____c*, "UnityEngine.InputSystem.Utilities", "TypeTable/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::TypeTable, "UnityEngine.InputSystem.Utilities", "TypeTable");
