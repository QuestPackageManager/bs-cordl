#pragma once
// IWYU pragma private; include "System/Resources/RuntimeResourceSet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Resources/zzzz__ResourceSet_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeResourceSet)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::IO {
class Stream;
}
namespace System::Resources {
struct ResourceLocator;
}
namespace System::Resources {
class ResourceReader;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Resources {
class RuntimeResourceSet;
}
// Write type traits
MARK_REF_PTR_T(::System::Resources::RuntimeResourceSet);
// Dependencies System.Collections.IEnumerable, System.Resources.ResourceSet
namespace System::Resources {
// Is value type: false
// CS Name: System.Resources.RuntimeResourceSet
class CORDL_TYPE RuntimeResourceSet : public ::System::Resources::ResourceSet {
public:
  // Declarations
  /// @brief Field _caseInsensitiveTable, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__caseInsensitiveTable,
                      put = __cordl_internal_set__caseInsensitiveTable)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* _caseInsensitiveTable;

  /// @brief Field _defaultReader, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultReader, put = __cordl_internal_set__defaultReader)) ::System::Resources::ResourceReader* _defaultReader;

  /// @brief Field _haveReadFromReader, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__haveReadFromReader, put = __cordl_internal_set__haveReadFromReader)) bool _haveReadFromReader;

  /// @brief Field _resCache, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__resCache,
                      put = __cordl_internal_set__resCache)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* _resCache;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Dispose, addr 0x3d1b648, size 0x140, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetEnumerator, addr 0x3d1b878, size 0x4, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method GetEnumeratorHelper, addr 0x3d1b87c, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumeratorHelper();

  /// @brief Method GetObject, addr 0x3d1c360, size 0xc, virtual true, abstract: false, final false
  inline ::System::Object* GetObject(::StringW key);

  /// @brief Method GetObject, addr 0x3d1c36c, size 0xc, virtual true, abstract: false, final false
  inline ::System::Object* GetObject(::StringW key, bool ignoreCase);

  /// @brief Method GetObject, addr 0x3d1b9ec, size 0x8f8, virtual false, abstract: false, final false
  inline ::System::Object* GetObject(::StringW key, bool ignoreCase, bool isString);

  /// @brief Method GetString, addr 0x3d1b97c, size 0x70, virtual true, abstract: false, final false
  inline ::StringW GetString(::StringW key);

  /// @brief Method GetString, addr 0x3d1c2e4, size 0x7c, virtual true, abstract: false, final false
  inline ::StringW GetString(::StringW key, bool ignoreCase);

  static inline ::System::Resources::RuntimeResourceSet* New_ctor(::StringW fileName);

  static inline ::System::Resources::RuntimeResourceSet* New_ctor(::System::IO::Stream* stream);

  /// @brief Method ResolveResourceLocator, addr 0x3d1cc04, size 0x17c, virtual false, abstract: false, final false
  inline ::System::Object* ResolveResourceLocator(::System::Resources::ResourceLocator resLocation, ::StringW key,
                                                  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* copyOfCache, bool keyInWrongCase);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3d1b978, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* const& __cordl_internal_get__caseInsensitiveTable() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*& __cordl_internal_get__caseInsensitiveTable();

  constexpr ::System::Resources::ResourceReader* const& __cordl_internal_get__defaultReader() const;

  constexpr ::System::Resources::ResourceReader*& __cordl_internal_get__defaultReader();

  constexpr bool const& __cordl_internal_get__haveReadFromReader() const;

  constexpr bool& __cordl_internal_get__haveReadFromReader();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* const& __cordl_internal_get__resCache() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*& __cordl_internal_get__resCache();

  constexpr void __cordl_internal_set__caseInsensitiveTable(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* value);

  constexpr void __cordl_internal_set__defaultReader(::System::Resources::ResourceReader* value);

  constexpr void __cordl_internal_set__haveReadFromReader(bool value);

  constexpr void __cordl_internal_set__resCache(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* value);

  /// @brief Method .ctor, addr 0x3d1b338, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::StringW fileName);

  /// @brief Method .ctor, addr 0x3d1b554, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream);

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeResourceSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeResourceSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeResourceSet(RuntimeResourceSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeResourceSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeResourceSet(RuntimeResourceSet const&) = delete;

  /// @brief Field Version offset 0xffffffff size 0x4
  static constexpr int32_t Version{ static_cast<int32_t>(0x2) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3428 };

  /// @brief Field _resCache, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* ____resCache;

  /// @brief Field _defaultReader, offset: 0x30, size: 0x8, def value: None
  ::System::Resources::ResourceReader* ____defaultReader;

  /// @brief Field _caseInsensitiveTable, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* ____caseInsensitiveTable;

  /// @brief Field _haveReadFromReader, offset: 0x40, size: 0x1, def value: None
  bool ____haveReadFromReader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Resources::RuntimeResourceSet, ____resCache) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Resources::RuntimeResourceSet, ____defaultReader) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Resources::RuntimeResourceSet, ____caseInsensitiveTable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Resources::RuntimeResourceSet, ____haveReadFromReader) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Resources::RuntimeResourceSet, 0x48>, "Size mismatch!");

} // namespace System::Resources
NEED_NO_BOX(::System::Resources::RuntimeResourceSet);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::RuntimeResourceSet*, "System.Resources", "RuntimeResourceSet");
