#pragma once
// IWYU pragma private; include "System/Security/AccessControl/CommonAcl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__GenericAcl_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CommonAcl)
namespace System::Security::AccessControl {
struct AceFlags;
}
namespace System::Security::AccessControl {
struct AceQualifier;
}
namespace System::Security::AccessControl {
struct AuditFlags;
}
namespace System::Security::AccessControl {
template <typename T> class CommonAcl_RemoveAcesCallback_1;
}
namespace System::Security::AccessControl {
class GenericAce;
}
namespace System::Security::AccessControl {
struct InheritanceFlags;
}
namespace System::Security::AccessControl {
class ObjectAce;
}
namespace System::Security::AccessControl {
struct PropagationFlags;
}
namespace System::Security::AccessControl {
class QualifiedAce;
}
namespace System::Security::AccessControl {
class RawAcl;
}
namespace System::Security::Principal {
class SecurityIdentifier;
}
namespace System {
struct Guid;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::AccessControl {
class CommonAcl;
}
namespace System::Security::AccessControl {
template <typename T> class CommonAcl_RemoveAcesCallback_1;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::CommonAcl);
MARK_GEN_REF_PTR_T(::System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1);
// Dependencies System.MulticastDelegate
namespace System::Security::AccessControl {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Security.AccessControl.CommonAcl/RemoveAcesCallback`1<T>
class CORDL_TYPE CommonAcl_RemoveAcesCallback_1 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Invoke(T ace);

  static inline ::System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1<T>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommonAcl_RemoveAcesCallback_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommonAcl_RemoveAcesCallback_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommonAcl_RemoveAcesCallback_1(CommonAcl_RemoveAcesCallback_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommonAcl_RemoveAcesCallback_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommonAcl_RemoveAcesCallback_1(CommonAcl_RemoveAcesCallback_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3023 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Security::AccessControl
// Dependencies System.Security.AccessControl.GenericAcl
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: System.Security.AccessControl.CommonAcl
class CORDL_TYPE CommonAcl : public ::System::Security::AccessControl::GenericAcl {
public:
  // Declarations
  template <typename T> using RemoveAcesCallback_1 = ::System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1<T>;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(put = set_IsAefa)) bool IsAefa;

  __declspec(property(get = get_IsCanonical)) bool IsCanonical;

  __declspec(property(get = get_IsContainer)) bool IsContainer;

  __declspec(property(get = get_IsDS)) bool IsDS;

  __declspec(property(get = get_Item, put = set_Item)) ::System::Security::AccessControl::GenericAce* Item[];

  /// @brief Field is_aefa, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_is_aefa, put = __cordl_internal_set_is_aefa)) bool is_aefa;

  /// @brief Field is_canonical, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_is_canonical, put = __cordl_internal_set_is_canonical)) bool is_canonical;

  /// @brief Field is_container, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_is_container, put = __cordl_internal_set_is_container)) bool is_container;

  /// @brief Field is_ds, offset 0x13, size 0x1
  __declspec(property(get = __cordl_internal_get_is_ds, put = __cordl_internal_set_is_ds)) bool is_ds;

  /// @brief Field raw_acl, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_raw_acl, put = __cordl_internal_set_raw_acl)) ::System::Security::AccessControl::RawAcl* raw_acl;

  /// @brief Method AddAce, addr 0x3cc4b20, size 0x1c, virtual false, abstract: false, final false
  inline void AddAce(::System::Security::AccessControl::AceQualifier aceQualifier, ::System::Security::Principal::SecurityIdentifier* sid, int32_t accessMask,
                     ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags,
                     ::System::Security::AccessControl::AuditFlags auditFlags);

  /// @brief Method AddAce, addr 0x3cc4bf4, size 0x78, virtual false, abstract: false, final false
  inline void AddAce(::System::Security::AccessControl::QualifiedAce* newAce);

  /// @brief Method AddAceGetQualifiedAce, addr 0x3cc4b3c, size 0xb8, virtual false, abstract: false, final false
  inline ::System::Security::AccessControl::QualifiedAce* AddAceGetQualifiedAce(::System::Security::AccessControl::AceQualifier aceQualifier, ::System::Security::Principal::SecurityIdentifier* sid,
                                                                                int32_t accessMask, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                                ::System::Security::AccessControl::PropagationFlags propagationFlags,
                                                                                ::System::Security::AccessControl::AuditFlags auditFlags);

  /// @brief Method ApplyCanonicalSortToExplicitAces, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ApplyCanonicalSortToExplicitAces();

  /// @brief Method ApplyCanonicalSortToExplicitAces, addr 0x3cc495c, size 0x1c4, virtual false, abstract: false, final false
  inline void ApplyCanonicalSortToExplicitAces(int32_t start, int32_t count);

  /// @brief Method CanonicalizeAndClearAefa, addr 0x3cc3854, size 0xc0, virtual false, abstract: false, final false
  inline void CanonicalizeAndClearAefa();

  /// @brief Method CopyAce, addr 0x3cc397c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Security::AccessControl::GenericAce* CopyAce(::System::Security::AccessControl::GenericAce* ace);

  /// @brief Method GetAceFlags, addr 0x3cc4c6c, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Security::AccessControl::AceFlags GetAceFlags(::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                 ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AuditFlags auditFlags);

  /// @brief Method GetAceInsertPosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetAceInsertPosition(::System::Security::AccessControl::AceQualifier aceQualifier);

  /// @brief Method GetCanonicalExplicitAceCount, addr 0x3cc4388, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetCanonicalExplicitAceCount();

  /// @brief Method GetCanonicalExplicitDenyAceCount, addr 0x3cc40f0, size 0x144, virtual false, abstract: false, final false
  inline int32_t GetCanonicalExplicitDenyAceCount();

  /// @brief Method GetObjectAceTypeGuids, addr 0x3cc482c, size 0x98, virtual false, abstract: false, final false
  static inline void GetObjectAceTypeGuids(::System::Security::AccessControl::ObjectAce* ace, ::ByRef<::System::Guid> type, ::ByRef<::System::Guid> inheritedType);

  /// @brief Method Init, addr 0x3cc37b0, size 0x18, virtual false, abstract: false, final false
  inline void Init(bool isContainer, bool isDS, ::System::Security::AccessControl::RawAcl* rawAcl);

  /// @brief Method IsAceMeaningless, addr 0x3cc3d7c, size 0x100, virtual true, abstract: false, final false
  inline bool IsAceMeaningless(::System::Security::AccessControl::GenericAce* ace);

  /// @brief Method MergeExplicitAcePair, addr 0x3cc4408, size 0x3b8, virtual false, abstract: false, final false
  inline ::System::Security::AccessControl::GenericAce* MergeExplicitAcePair(::System::Security::AccessControl::GenericAce* ace1, ::System::Security::AccessControl::GenericAce* ace2);

  /// @brief Method MergeExplicitAces, addr 0x3cc3c64, size 0x118, virtual false, abstract: false, final false
  inline void MergeExplicitAces();

  static inline ::System::Security::AccessControl::CommonAcl* New_ctor(bool isContainer, bool isDS, int32_t capacity);

  static inline ::System::Security::AccessControl::CommonAcl* New_ctor(bool isContainer, bool isDS, uint8_t revision, int32_t capacity);

  /// @brief Method RemoveAces, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void RemoveAces(::System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1<T>* callback);

  /// @brief Method RequireCanonicity, addr 0x3cc3a40, size 0x5c, virtual false, abstract: false, final false
  inline void RequireCanonicity();

  /// @brief Method TestCanonicity, addr 0x3cc3a9c, size 0x1c8, virtual false, abstract: false, final false
  inline bool TestCanonicity();

  constexpr bool const& __cordl_internal_get_is_aefa() const;

  constexpr bool& __cordl_internal_get_is_aefa();

  constexpr bool const& __cordl_internal_get_is_canonical() const;

  constexpr bool& __cordl_internal_get_is_canonical();

  constexpr bool const& __cordl_internal_get_is_container() const;

  constexpr bool& __cordl_internal_get_is_container();

  constexpr bool const& __cordl_internal_get_is_ds() const;

  constexpr bool& __cordl_internal_get_is_ds();

  constexpr ::System::Security::AccessControl::RawAcl* const& __cordl_internal_get_raw_acl() const;

  constexpr ::System::Security::AccessControl::RawAcl*& __cordl_internal_get_raw_acl();

  constexpr void __cordl_internal_set_is_aefa(bool value);

  constexpr void __cordl_internal_set_is_canonical(bool value);

  constexpr void __cordl_internal_set_is_container(bool value);

  constexpr void __cordl_internal_set_is_ds(bool value);

  constexpr void __cordl_internal_set_raw_acl(::System::Security::AccessControl::RawAcl* value);

  /// @brief Method .ctor, addr 0x3cc37c8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(bool isContainer, bool isDS, int32_t capacity);

  /// @brief Method .ctor, addr 0x3cc3634, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(bool isContainer, bool isDS, uint8_t revision, int32_t capacity);

  /// @brief Method get_Count, addr 0x3cc3914, size 0x20, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsCanonical, addr 0x3cc3934, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsCanonical();

  /// @brief Method get_IsContainer, addr 0x3cc393c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsContainer();

  /// @brief Method get_IsDS, addr 0x3cc3944, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDS();

  /// @brief Method get_Item, addr 0x3cc3958, size 0x24, virtual true, abstract: false, final true
  inline ::System::Security::AccessControl::GenericAce* get_Item(int32_t index);

  /// @brief Method set_IsAefa, addr 0x3cc394c, size 0xc, virtual false, abstract: false, final false
  inline void set_IsAefa(bool value);

  /// @brief Method set_Item, addr 0x3cc3a08, size 0x38, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, ::System::Security::AccessControl::GenericAce* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommonAcl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommonAcl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommonAcl(CommonAcl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommonAcl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommonAcl(CommonAcl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3024 };

  /// @brief Field is_aefa, offset: 0x10, size: 0x1, def value: None
  bool ___is_aefa;

  /// @brief Field is_canonical, offset: 0x11, size: 0x1, def value: None
  bool ___is_canonical;

  /// @brief Field is_container, offset: 0x12, size: 0x1, def value: None
  bool ___is_container;

  /// @brief Field is_ds, offset: 0x13, size: 0x1, def value: None
  bool ___is_ds;

  /// @brief Field raw_acl, offset: 0x18, size: 0x8, def value: None
  ::System::Security::AccessControl::RawAcl* ___raw_acl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::AccessControl::CommonAcl, ___is_aefa) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::CommonAcl, ___is_canonical) == 0x11, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::CommonAcl, ___is_container) == 0x12, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::CommonAcl, ___is_ds) == 0x13, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::CommonAcl, ___raw_acl) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::CommonAcl, 0x20>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::CommonAcl);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::CommonAcl*, "System.Security.AccessControl", "CommonAcl");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1, "System.Security.AccessControl", "CommonAcl/RemoveAcesCallback`1");
