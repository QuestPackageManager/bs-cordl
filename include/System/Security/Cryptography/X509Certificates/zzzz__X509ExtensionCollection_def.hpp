#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509ExtensionCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509ExtensionCollection)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ExtensionEnumerator;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Extension;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509ExtensionCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509ExtensionCollection);
// Dependencies System.Collections.ICollection, System.Collections.IEnumerable, System.Object
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: System.Security.Cryptography.X509Certificates.X509ExtensionCollection
class CORDL_TYPE X509ExtensionCollection : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Empty;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item)) ::System::Security::Cryptography::X509Certificates::X509Extension* Item[];

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  /// @brief Field _list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__list, put = __cordl_internal_set__list)) ::System::Collections::ArrayList* _list;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x443ebc8, size 0x70, virtual false, abstract: false, final false
  inline int32_t Add(::System::Security::Cryptography::X509Certificates::X509Extension* extension);

  /// @brief Method GetEnumerator, addr 0x443ed30, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509ExtensionEnumerator* GetEnumerator();

  static inline ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection* New_ctor();

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x443ec38, size 0xf8, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x443edd0, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__list() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__list();

  constexpr void __cordl_internal_set__list(::System::Collections::ArrayList* value);

  /// @brief Method .ctor, addr 0x443e784, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_Empty();

  /// @brief Method get_Count, addr 0x443e7e8, size 0x24, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsSynchronized, addr 0x443e80c, size 0x24, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x443e834, size 0x394, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Extension* get_Item(::StringW oid);

  /// @brief Method get_SyncRoot, addr 0x443e830, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  static inline void setStaticF_Empty(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509ExtensionCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509ExtensionCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509ExtensionCollection(X509ExtensionCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509ExtensionCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509ExtensionCollection(X509ExtensionCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9333 };

  /// @brief Field _list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ExtensionCollection, ____list) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509ExtensionCollection, 0x18>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509ExtensionCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*, "System.Security.Cryptography.X509Certificates", "X509ExtensionCollection");
