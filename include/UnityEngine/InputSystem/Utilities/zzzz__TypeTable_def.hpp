#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/TypeTable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
namespace UnityEngine::InputSystem {
class InputManager;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class TypeTable___c;
}
namespace UnityEngine::InputSystem::Utilities {
struct TypeTable;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::Utilities::TypeTable___c*);
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::TypeTable);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Utilities::TypeTable___c*, "UnityEngine.InputSystem.Utilities", "TypeTable/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Utilities::TypeTable, "UnityEngine.InputSystem.Utilities", "TypeTable");
// [CompilerGenerated]
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

  /// @brief Method .ctor, addr 0x69349ec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_names>b__2_0, addr 0x69349f0, size 0x20, virtual false, abstract: false, final false
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
  // Ctor Parameters [CppParam { name: "", ty: "TypeTable___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeTable___c(TypeTable___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeTable___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeTable___c(TypeTable___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11171 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::Utilities::TypeTable___c) == 0x10, "Size mismatch!");

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

  /// @brief Method AddTypeRegistration, addr 0x69346f8, size 0x14c, virtual false, abstract: false, final false
  inline void AddTypeRegistration(::StringW name, ::System::Type* type);

  /// @brief Method FindNameForType, addr 0x6934520, size 0x1d8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString FindNameForType(::System::Type* type);

  /// @brief Method Initialize, addr 0x693447c, size 0xa4, virtual false, abstract: false, final false
  inline void Initialize(::UnityEngine::InputSystem::InputManager* manager);

  /// @brief Method LookupTypeRegistration, addr 0x6934844, size 0x9c, virtual false, abstract: false, final false
  inline ::System::Type* LookupTypeRegistration(::StringW name);

  /// @brief Method TryLookupTypeRegistration, addr 0x69348e0, size 0xb8, virtual false, abstract: false, final false
  inline ::System::Type* TryLookupTypeRegistration(::UnityEngine::InputSystem::Utilities::InternedString internedName);

  /// @brief Method get_internedNames, addr 0x6934428, size 0x54, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* get_internedNames();

  /// @brief Method get_names, addr 0x69342f0, size 0x138, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_names();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeTable();

  // Ctor Parameters [CppParam { name: "table", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>*", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "m_Manager", ty: "::UnityEngine::InputSystem::InputManager*", modifiers: "", def_value: None, comment: None }]
  constexpr TypeTable(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*>* table,
                      ::UnityEngine::InputSystem::InputManager* m_Manager) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11172 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field table, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*>* table;

  /// @brief Field m_Manager, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputManager* m_Manager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Utilities::TypeTable, table) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::TypeTable, m_Manager) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::Utilities::TypeTable) == 0x10, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
