#pragma once
// IWYU pragma private; include "System/Security/AccessControl/GenericAcl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GenericAcl)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Security::AccessControl {
class AceEnumerator;
}
namespace System::Security::AccessControl {
class GenericAce;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::AccessControl {
class GenericAcl;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::GenericAcl);
// Type: System.Security.AccessControl::GenericAcl
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: ::System.Security.AccessControl::GenericAcl*
class CORDL_TYPE GenericAcl : public ::System::Object {
public:
  // Declarations
  /// @brief Field AclRevision, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_AclRevision, put = setStaticF_AclRevision)) uint8_t AclRevision;

  /// @brief Field AclRevisionDS, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_AclRevisionDS, put = setStaticF_AclRevisionDS)) uint8_t AclRevisionDS;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item))::System::Security::AccessControl::GenericAce* Item[];

  /// @brief Field MaxBinaryLength, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MaxBinaryLength, put = setStaticF_MaxBinaryLength)) int32_t MaxBinaryLength;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method CopyTo, addr 0x28049c0, size 0x18c, virtual false, abstract: false, final false
  inline void CopyTo(::ArrayW<::System::Security::AccessControl::GenericAce*, ::Array<::System::Security::AccessControl::GenericAce*>*> array, int32_t index);

  /// @brief Method GetEnumerator, addr 0x2802840, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Security::AccessControl::AceEnumerator* GetEnumerator();

  static inline ::System::Security::AccessControl::GenericAcl* New_ctor();

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x2804b4c, size 0x84, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2804bd0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method .ctor, addr 0x2801f54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline uint8_t getStaticF_AclRevision();

  static inline uint8_t getStaticF_AclRevisionDS();

  static inline int32_t getStaticF_MaxBinaryLength();

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_Count();

  /// @brief Method get_IsSynchronized, addr 0x28049b4, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::AccessControl::GenericAce* get_Item(int32_t index);

  /// @brief Method get_SyncRoot, addr 0x28049bc, size 0x4, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  static inline void setStaticF_AclRevision(uint8_t value);

  static inline void setStaticF_AclRevisionDS(uint8_t value);

  static inline void setStaticF_MaxBinaryLength(int32_t value);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Item(int32_t index, ::System::Security::AccessControl::GenericAce* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericAcl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenericAcl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericAcl(GenericAcl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericAcl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericAcl(GenericAcl const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::GenericAcl, 0x10>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::GenericAcl);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::GenericAcl*, "System.Security.AccessControl", "GenericAcl");
