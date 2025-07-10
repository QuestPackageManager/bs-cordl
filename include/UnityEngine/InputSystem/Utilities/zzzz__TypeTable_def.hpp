#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/TypeTable.hpp"
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
class TypeTable___c;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class TypeTable___c;
}
namespace UnityEngine::InputSystem::Utilities {
struct TypeTable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::TypeTable___c);
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::TypeTable);
// Dependencies System.Object
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.TypeTable/<>c
class CORDL_TYPE TypeTable___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::InputSystem::Utilities::TypeTable___c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* __9__2_0;

  static inline ::UnityEngine::InputSystem::Utilities::TypeTable___c* New_ctor();

  /// @brief Method .ctor, addr 0x4572e84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_names>b__2_0, addr 0x4572e8c, size 0x24, virtual false, abstract: false, final false
  inline ::StringW _get_names_b__2_0(::UnityEngine::InputSystem::Utilities::InternedString x);

  static inline ::UnityEngine::InputSystem::Utilities::TypeTable___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* getStaticF___9__2_0();

  static inline void setStaticF___9(::UnityEngine::InputSystem::Utilities::TypeTable___c* value);

  static inline void setStaticF___9__2_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeTable___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeTable___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeTable___c(TypeTable___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeTable___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeTable___c(TypeTable___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7122 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::TypeTable___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
// Dependencies
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Utilities.TypeTable
struct CORDL_TYPE TypeTable {
public:
  // Declarations
  using __c = ::UnityEngine::InputSystem::Utilities::TypeTable___c;

  __declspec(property(get = get_internedNames)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* internedNames;

  __declspec(property(get = get_names)) ::System::Collections::Generic::IEnumerable_1<::StringW>* names;

  /// @brief Method AddTypeRegistration, addr 0x4572bd4, size 0x160, virtual false, abstract: false, final false
  inline void AddTypeRegistration(::StringW name, ::System::Type* type);

  /// @brief Method FindNameForType, addr 0x45729b8, size 0x21c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString FindNameForType(::System::Type* type);

  /// @brief Method Initialize, addr 0x4572944, size 0x74, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method LookupTypeRegistration, addr 0x4572d34, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Type* LookupTypeRegistration(::StringW name);

  /// @brief Method get_internedNames, addr 0x45728f4, size 0x50, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* get_internedNames();

  /// @brief Method get_names, addr 0x45727d0, size 0x124, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_names();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeTable();

  // Ctor Parameters [CppParam { name: "table", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>*", modifiers: "", def_value:
  // None }]
  constexpr TypeTable(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*>* table) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7123 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field table, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*>* table;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Utilities::TypeTable, table) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::TypeTable, 0x8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::TypeTable___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::TypeTable___c*, "UnityEngine.InputSystem.Utilities", "TypeTable/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::TypeTable, "UnityEngine.InputSystem.Utilities", "TypeTable");
