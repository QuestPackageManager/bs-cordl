#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ResourceSet)
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Resources {
class IResourceReader;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Resources {
class ResourceSet;
}
// Write type traits
MARK_REF_PTR_T(::System::Resources::ResourceSet);
// Type: System.Resources::ResourceSet
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Resources {
// Is value type: false
// CS Name: ::System.Resources::ResourceSet*
class CORDL_TYPE ResourceSet : public ::System::Object {
public:
  // Declarations
  /// @brief Field Reader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Reader, put = __cordl_internal_set_Reader))::System::Resources::IResourceReader* Reader;

  /// @brief Field Table, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Table, put = __cordl_internal_set_Table))::System::Collections::Hashtable* Table;

  /// @brief Field _caseInsensitiveTable, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__caseInsensitiveTable, put = __cordl_internal_set__caseInsensitiveTable))::System::Collections::Hashtable* _caseInsensitiveTable;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CommonInit, addr 0x2638664, size 0x60, virtual false, abstract: false, final false
  inline void CommonInit();

  /// @brief Method Dispose, addr 0x26386c4, size 0x10, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x26324cc, size 0xb4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetCaseInsensitiveObjectInternal, addr 0x2638ba0, size 0x2d0, virtual false, abstract: false, final false
  inline ::System::Object* GetCaseInsensitiveObjectInternal(::StringW name);

  /// @brief Method GetEnumerator, addr 0x26386d4, size 0x4, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method GetEnumeratorHelper, addr 0x26386d8, size 0x84, virtual false, abstract: false, final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumeratorHelper();

  /// @brief Method GetObject, addr 0x2638e70, size 0x4, virtual true, abstract: false, final false
  inline ::System::Object* GetObject(::StringW name);

  /// @brief Method GetObject, addr 0x2638e74, size 0x40, virtual true, abstract: false, final false
  inline ::System::Object* GetObject(::StringW name, bool ignoreCase);

  /// @brief Method GetObjectInternal, addr 0x26388c8, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Object* GetObjectInternal(::StringW name);

  /// @brief Method GetString, addr 0x2638760, size 0x168, virtual true, abstract: false, final false
  inline ::StringW GetString(::StringW name);

  /// @brief Method GetString, addr 0x263899c, size 0x204, virtual true, abstract: false, final false
  inline ::StringW GetString(::StringW name, bool ignoreCase);

  static inline ::System::Resources::ResourceSet* New_ctor();

  static inline ::System::Resources::ResourceSet* New_ctor(bool junk);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x263875c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Resources::IResourceReader*& __cordl_internal_get_Reader();

  constexpr ::cordl_internals::to_const_pointer<::System::Resources::IResourceReader*> const& __cordl_internal_get_Reader() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_Table();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_Table() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__caseInsensitiveTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get__caseInsensitiveTable() const;

  constexpr void __cordl_internal_set_Reader(::System::Resources::IResourceReader* value);

  constexpr void __cordl_internal_set_Table(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__caseInsensitiveTable(::System::Collections::Hashtable* value);

  /// @brief Method .ctor, addr 0x2638648, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2632164, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(bool junk);

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourceSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceSet(ResourceSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceSet(ResourceSet const&) = delete;

  /// @brief Field Reader, offset: 0x10, size: 0x8, def value: None
  ::System::Resources::IResourceReader* ___Reader;

  /// @brief Field Table, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___Table;

  /// @brief Field _caseInsensitiveTable, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____caseInsensitiveTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Resources::ResourceSet, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Resources::ResourceSet, ___Reader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceSet, ___Table) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceSet, ____caseInsensitiveTable) == 0x20, "Offset mismatch!");

} // namespace System::Resources
NEED_NO_BOX(::System::Resources::ResourceSet);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::ResourceSet*, "System.Resources", "ResourceSet");
