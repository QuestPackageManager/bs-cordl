#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Resources/zzzz__ResourceSet_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeResourceSet)
namespace System::Resources {
struct ResourceLocator;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Resources {
class ResourceReader;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace System::Resources {
class RuntimeResourceSet;
}
// Write type traits
MARK_REF_PTR_T(::System::Resources::RuntimeResourceSet);
// Type: System.Resources::RuntimeResourceSet
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Resources {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3437))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3424))
// CS Name: ::System.Resources::RuntimeResourceSet*
class CORDL_TYPE RuntimeResourceSet : public ::System::Resources::ResourceSet {
public:
  // Declarations
  /// @brief Field _resCache, offset 0x28, size 0x8
  __declspec(property(get = __get__resCache, put = __set__resCache))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* _resCache;

  /// @brief Field _defaultReader, offset 0x30, size 0x8
  __declspec(property(get = __get__defaultReader, put = __set__defaultReader))::System::Resources::ResourceReader* _defaultReader;

  /// @brief Field _caseInsensitiveTable, offset 0x38, size 0x8
  __declspec(property(get = __get__caseInsensitiveTable,
                      put = __set__caseInsensitiveTable))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* _caseInsensitiveTable;

  /// @brief Field _haveReadFromReader, offset 0x40, size 0x1
  __declspec(property(get = __get__haveReadFromReader, put = __set__haveReadFromReader)) bool _haveReadFromReader;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*& __get__resCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*> const& __get__resCache() const;

  constexpr void __set__resCache(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* value);

  constexpr ::System::Resources::ResourceReader*& __get__defaultReader();

  constexpr ::cordl_internals::to_const_pointer<::System::Resources::ResourceReader*> const& __get__defaultReader() const;

  constexpr void __set__defaultReader(::System::Resources::ResourceReader* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*& __get__caseInsensitiveTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*> const& __get__caseInsensitiveTable() const;

  constexpr void __set__caseInsensitiveTable(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* value);

  constexpr bool& __get__haveReadFromReader();

  constexpr bool const& __get__haveReadFromReader() const;

  constexpr void __set__haveReadFromReader(bool value);

  static inline ::System::Resources::RuntimeResourceSet* New_ctor(::StringW fileName);

  /// @brief Method .ctor addr 0x23844dc size 0x140 virtual false final false
  inline void _ctor(::StringW fileName);

  static inline ::System::Resources::RuntimeResourceSet* New_ctor(::System::IO::Stream* stream);

  /// @brief Method .ctor addr 0x238461c size 0x100 virtual false final false
  inline void _ctor(::System::IO::Stream* stream);

  /// @brief Method Dispose addr 0x238471c size 0x124 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method GetEnumerator addr 0x2384840 size 0x4 virtual true final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2384944 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method GetEnumeratorHelper addr 0x2384844 size 0x100 virtual false final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumeratorHelper();

  /// @brief Method GetString addr 0x2384948 size 0x70 virtual true final false
  inline ::StringW GetString(::StringW key);

  /// @brief Method GetString addr 0x23852cc size 0x7c virtual true final false
  inline ::StringW GetString(::StringW key, bool ignoreCase);

  /// @brief Method GetObject addr 0x2385348 size 0xc virtual true final false
  inline ::System::Object* GetObject(::StringW key);

  /// @brief Method GetObject addr 0x2385354 size 0xc virtual true final false
  inline ::System::Object* GetObject(::StringW key, bool ignoreCase);

  /// @brief Method GetObject addr 0x23849b8 size 0x914 virtual false final false
  inline ::System::Object* GetObject(::StringW key, bool ignoreCase, bool isString);

  /// @brief Method ResolveResourceLocator addr 0x2385360 size 0x1188 virtual false final false
  inline ::System::Object* ResolveResourceLocator(::System::Resources::ResourceLocator resLocation, ::StringW key,
                                                  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* copyOfCache, bool keyInWrongCase);

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeResourceSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeResourceSet(RuntimeResourceSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeResourceSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeResourceSet(RuntimeResourceSet const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeResourceSet();

public:
  /// @brief Field _resCache, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* ____resCache;

  /// @brief Field _defaultReader, offset: 0x30, size: 0x8, def value: None
  ::System::Resources::ResourceReader* ____defaultReader;

  /// @brief Field _caseInsensitiveTable, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* ____caseInsensitiveTable;

  /// @brief Field _haveReadFromReader, offset: 0x40, size: 0x1, def value: None
  bool ____haveReadFromReader;

  /// @brief Field Version offset 0xffffffff size 0x4
  static constexpr int32_t Version{ static_cast<int32_t>(0x2) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Resources::RuntimeResourceSet, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Resources::RuntimeResourceSet, ____resCache) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Resources::RuntimeResourceSet, ____defaultReader) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Resources::RuntimeResourceSet, ____caseInsensitiveTable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Resources::RuntimeResourceSet, ____haveReadFromReader) == 0x40, "Offset mismatch!");

} // namespace System::Resources
NEED_NO_BOX(::System::Resources::RuntimeResourceSet);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::RuntimeResourceSet*, "System.Resources", "RuntimeResourceSet");
