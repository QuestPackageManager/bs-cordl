#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509ExtensionCollection)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
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
// Type: System.Security.Cryptography.X509Certificates::X509ExtensionCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9012))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509ExtensionCollection*
class CORDL_TYPE X509ExtensionCollection : public ::System::Object {
public:
  // Declarations
  /// @brief Field _list, offset 0x10, size 0x8
  __declspec(property(get = __get__list, put = __set__list))::System::Collections::ArrayList* _list;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::ArrayW<uint8_t, ::Array<uint8_t>*> Empty;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  __declspec(property(get = get_Item))::System::Security::Cryptography::X509Certificates::X509Extension* Item[];

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  constexpr ::System::Collections::ArrayList*& __get__list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get__list() const;

  constexpr void __set__list(::System::Collections::ArrayList* value);

  static inline void setStaticF_Empty(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_Empty();

  static inline ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection* New_ctor();

  /// @brief Method .ctor, addr 0x2984838, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x29848a4, size 0x24, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsSynchronized, addr 0x29848c8, size 0x24, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot, addr 0x29848ec, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Method get_Item, addr 0x29848f0, size 0x3ac, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Extension* get_Item(::StringW oid);

  /// @brief Method Add, addr 0x2984c9c, size 0x74, virtual false, abstract: false, final false
  inline int32_t Add(::System::Security::Cryptography::X509Certificates::X509Extension* extension);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x2984d10, size 0x104, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetEnumerator, addr 0x2984e14, size 0x64, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509ExtensionEnumerator* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2984ebc, size 0x64, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "X509ExtensionCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509ExtensionCollection(X509ExtensionCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509ExtensionCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509ExtensionCollection(X509ExtensionCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509ExtensionCollection();

public:
  /// @brief Field _list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509ExtensionCollection, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ExtensionCollection, ____list) == 0x10, "Offset mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509ExtensionCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*, "System.Security.Cryptography.X509Certificates", "X509ExtensionCollection");
