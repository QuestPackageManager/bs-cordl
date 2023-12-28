#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ResourceSet)
namespace System::Collections {
class IEnumerable;
}
namespace System::Resources {
class IResourceReader;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System {
class IDisposable;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3442))
// CS Name: ::System.Resources::ResourceSet*
class CORDL_TYPE ResourceSet : public ::System::Object {
public:
  // Declarations
  /// @brief Field Reader, offset 0x10, size 0x8
  __declspec(property(get = __get_Reader, put = __set_Reader))::System::Resources::IResourceReader* Reader;

  /// @brief Field Table, offset 0x18, size 0x8
  __declspec(property(get = __get_Table, put = __set_Table))::System::Collections::Hashtable* Table;

  /// @brief Field _caseInsensitiveTable, offset 0x20, size 0x8
  __declspec(property(get = __get__caseInsensitiveTable, put = __set__caseInsensitiveTable))::System::Collections::Hashtable* _caseInsensitiveTable;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::System::Resources::IResourceReader*& __get_Reader();

  constexpr ::cordl_internals::to_const_pointer<::System::Resources::IResourceReader*> const& __get_Reader() const;

  constexpr void __set_Reader(::System::Resources::IResourceReader* value);

  constexpr ::System::Collections::Hashtable*& __get_Table();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get_Table() const;

  constexpr void __set_Table(::System::Collections::Hashtable* value);

  constexpr ::System::Collections::Hashtable*& __get__caseInsensitiveTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get__caseInsensitiveTable() const;

  constexpr void __set__caseInsensitiveTable(::System::Collections::Hashtable* value);

  static inline ::System::Resources::ResourceSet* New_ctor();

  /// @brief Method .ctor addr 0x24e558c size 0x1c virtual false final false
  inline void _ctor();

  static inline ::System::Resources::ResourceSet* New_ctor(bool junk);

  /// @brief Method .ctor addr 0x24df0a8 size 0x8 virtual false final false
  inline void _ctor(bool junk);

  /// @brief Method CommonInit addr 0x24e55a8 size 0x60 virtual false final false
  inline void CommonInit();

  /// @brief Method Dispose addr 0x24df410 size 0xb4 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method Dispose addr 0x24e5608 size 0x10 virtual true final true
  inline void Dispose();

  /// @brief Method GetEnumerator addr 0x24e5618 size 0x4 virtual true final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x24e56a0 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method GetEnumeratorHelper addr 0x24e561c size 0x84 virtual false final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumeratorHelper();

  /// @brief Method GetString addr 0x24e56a4 size 0x168 virtual true final false
  inline ::StringW GetString(::StringW name);

  /// @brief Method GetString addr 0x24e58e0 size 0x204 virtual true final false
  inline ::StringW GetString(::StringW name, bool ignoreCase);

  /// @brief Method GetObject addr 0x24e5db4 size 0x4 virtual true final false
  inline ::System::Object* GetObject(::StringW name);

  /// @brief Method GetObject addr 0x24e5db8 size 0x40 virtual true final false
  inline ::System::Object* GetObject(::StringW name, bool ignoreCase);

  /// @brief Method GetObjectInternal addr 0x24e580c size 0xd4 virtual false final false
  inline ::System::Object* GetObjectInternal(::StringW name);

  /// @brief Method GetCaseInsensitiveObjectInternal addr 0x24e5ae4 size 0x2d0 virtual false final false
  inline ::System::Object* GetCaseInsensitiveObjectInternal(::StringW name);

  // Ctor Parameters [CppParam { name: "", ty: "ResourceSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceSet(ResourceSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceSet(ResourceSet const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceSet();

public:
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

} // namespace System::Resources
NEED_NO_BOX(::System::Resources::ResourceSet);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::ResourceSet*, "System.Resources", "ResourceSet");
