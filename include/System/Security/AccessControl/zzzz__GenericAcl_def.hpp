#pragma once
// IWYU pragma private; include "System/Security/AccessControl/GenericAcl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GenericAcl)
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
// Dependencies System.Collections.ICollection, System.Collections.IEnumerable, System.Object
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: System.Security.AccessControl.GenericAcl
class CORDL_TYPE GenericAcl : public ::System::Object {
public:
  // Declarations
  /// @brief Field AclRevision, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_AclRevision, put = setStaticF_AclRevision)) uint8_t AclRevision;

  /// @brief Field AclRevisionDS, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_AclRevisionDS, put = setStaticF_AclRevisionDS)) uint8_t AclRevisionDS;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item)) ::System::Security::AccessControl::GenericAce* Item[];

  /// @brief Field MaxBinaryLength, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_MaxBinaryLength, put = setStaticF_MaxBinaryLength)) int32_t MaxBinaryLength;

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method CopyTo, addr 0x3cc5cd8, size 0x184, virtual false, abstract: false, final false
  inline void CopyTo(::ArrayW<::System::Security::AccessControl::GenericAce*, ::Array<::System::Security::AccessControl::GenericAce*>*> array, int32_t index);

  /// @brief Method GetEnumerator, addr 0x3cc3c64, size 0x64, virtual false, abstract: false, final false
  inline ::System::Security::AccessControl::AceEnumerator* GetEnumerator();

  static inline ::System::Security::AccessControl::GenericAcl* New_ctor();

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x3cc5e5c, size 0x84, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3cc5ee0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method .ctor, addr 0x3cc338c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline uint8_t getStaticF_AclRevision();

  static inline uint8_t getStaticF_AclRevisionDS();

  static inline int32_t getStaticF_MaxBinaryLength();

  /// @brief Method get_Count, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsSynchronized, addr 0x3cc5ccc, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Security::AccessControl::GenericAce* get_Item(int32_t index);

  /// @brief Method get_SyncRoot, addr 0x3cc5cd4, size 0x4, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  static inline void setStaticF_AclRevision(uint8_t value);

  static inline void setStaticF_AclRevisionDS(uint8_t value);

  static inline void setStaticF_MaxBinaryLength(int32_t value);

  /// @brief Method set_Item, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3035 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::GenericAcl, 0x10>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::GenericAcl);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::GenericAcl*, "System.Security.AccessControl", "GenericAcl");
