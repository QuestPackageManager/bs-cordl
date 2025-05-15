#pragma once
// IWYU pragma private; include "System/Collections/Specialized/StringDictionary.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StringDictionary)
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace System::Collections::Specialized {
class StringDictionary;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Specialized::StringDictionary);
// Dependencies System.Collections.IEnumerable, System.Object
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: System.Collections.Specialized.StringDictionary
class CORDL_TYPE StringDictionary : public ::System::Object {
public:
  // Declarations
  /// @brief Field contents, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_contents, put = __cordl_internal_set_contents)) ::System::Collections::Hashtable* contents;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x44844e0, size 0x94, virtual true, abstract: false, final false
  inline void Add(::StringW key, ::StringW value);

  /// @brief Method GetEnumerator, addr 0x4484574, size 0x24, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::System::Collections::Specialized::StringDictionary* New_ctor();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_contents() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_contents();

  constexpr void __cordl_internal_set_contents(::System::Collections::Hashtable* value);

  /// @brief Method .ctor, addr 0x4484480, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringDictionary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringDictionary(StringDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringDictionary(StringDictionary const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9496 };

  /// @brief Field contents, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___contents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::Specialized::StringDictionary, ___contents) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::StringDictionary, 0x18>, "Size mismatch!");

} // namespace System::Collections::Specialized
NEED_NO_BOX(::System::Collections::Specialized::StringDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::StringDictionary*, "System.Collections.Specialized", "StringDictionary");
