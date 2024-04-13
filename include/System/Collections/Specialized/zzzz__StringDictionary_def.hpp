#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StringDictionary)
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IEnumerable;
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
// Type: System.Collections.Specialized::StringDictionary
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: ::System.Collections.Specialized::StringDictionary*
class CORDL_TYPE StringDictionary : public ::System::Object {
public:
  // Declarations
  /// @brief Field contents, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_contents, put = __cordl_internal_set_contents))::System::Collections::Hashtable* contents;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x2e73384, size 0x98, virtual true, abstract: false, final false
  inline void Add(::StringW key, ::StringW value);

  /// @brief Method GetEnumerator, addr 0x2e7341c, size 0x24, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::System::Collections::Specialized::StringDictionary* New_ctor();

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_contents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_contents() const;

  constexpr void __cordl_internal_set_contents(::System::Collections::Hashtable* value);

  /// @brief Method .ctor, addr 0x2e7331c, size 0x68, virtual false, abstract: false, final false
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

  /// @brief Field contents, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___contents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::StringDictionary, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Collections::Specialized::StringDictionary, ___contents) == 0x10, "Offset mismatch!");

} // namespace System::Collections::Specialized
NEED_NO_BOX(::System::Collections::Specialized::StringDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::StringDictionary*, "System.Collections.Specialized", "StringDictionary");
