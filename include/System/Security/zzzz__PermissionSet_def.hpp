#pragma once
// IWYU pragma private; include "System/Security/PermissionSet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Permissions/zzzz__PermissionState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PermissionSet)
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
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Security::Permissions {
struct PermissionState;
}
namespace System::Security {
class IPermission;
}
namespace System::Security {
class ISecurityEncodable;
}
namespace System::Security {
class SecurityElement;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security {
class PermissionSet;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::PermissionSet);
// Type: System.Security::PermissionSet
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Security {
// Is value type: false
// CS Name: ::System.Security::PermissionSet*
class CORDL_TYPE PermissionSet : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  /// @brief Field _declsec, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__declsec, put = __cordl_internal_set__declsec)) bool _declsec;

  /// @brief Field _ignored, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ignored, put = __cordl_internal_set__ignored)) ::ArrayW<bool, ::Array<bool>*> _ignored;

  /// @brief Field action, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_action, put = setStaticF_action)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> action;

  /// @brief Field list, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_list, put = __cordl_internal_set_list)) ::System::Collections::ArrayList* list;

  /// @brief Field psUnrestricted, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_psUnrestricted, put = setStaticF_psUnrestricted)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> psUnrestricted;

  /// @brief Field state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state)) ::System::Security::Permissions::PermissionState state;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  /// @brief Convert operator to "::System::Security::ISecurityEncodable"
  constexpr operator ::System::Security::ISecurityEncodable*() noexcept;

  /// @brief Method CasOnlyDemand, addr 0x3c32a80, size 0x78, virtual false, abstract: false, final false
  inline void CasOnlyDemand(int32_t skip);

  /// @brief Method CopyTo, addr 0x3c336c4, size 0x168, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method Demand, addr 0x3c3382c, size 0x228, virtual true, abstract: false, final true
  inline void Demand();

  /// @brief Method Equals, addr 0x3c334ac, size 0x19c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetEnumerator, addr 0x3c33e00, size 0x24, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetHashCode, addr 0x3c33680, size 0x44, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsEmpty, addr 0x3c33a54, size 0x39c, virtual false, abstract: false, final false
  inline bool IsEmpty();

  /// @brief Method IsUnrestricted, addr 0x3c33df0, size 0x10, virtual false, abstract: false, final false
  inline bool IsUnrestricted();

  static inline ::System::Security::PermissionSet* New_ctor();

  static inline ::System::Security::PermissionSet* New_ctor(::System::Security::IPermission* perm);

  static inline ::System::Security::PermissionSet* New_ctor(::System::Security::Permissions::PermissionState state);

  /// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0x3c33e9c, size 0x4, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender);

  /// @brief Method ToString, addr 0x3c33e24, size 0x2c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToXml, addr 0x3c32fc4, size 0x458, virtual true, abstract: false, final false
  inline ::System::Security::SecurityElement* ToXml();

  constexpr bool const& __cordl_internal_get__declsec() const;

  constexpr bool& __cordl_internal_get__declsec();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get__ignored() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get__ignored();

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_list() const;

  constexpr ::System::Security::Permissions::PermissionState const& __cordl_internal_get_state() const;

  constexpr ::System::Security::Permissions::PermissionState& __cordl_internal_get_state();

  constexpr void __cordl_internal_set__declsec(bool value);

  constexpr void __cordl_internal_set__ignored(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set_list(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_state(::System::Security::Permissions::PermissionState value);

  /// @brief Method .ctor, addr 0x3c32d50, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3c32a34, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::IPermission* perm);

  /// @brief Method .ctor, addr 0x3c32e34, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Permissions::PermissionState state);

  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> getStaticF_action();

  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> getStaticF_psUnrestricted();

  /// @brief Method get_Count, addr 0x3c33e50, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsSynchronized, addr 0x3c33e74, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot, addr 0x3c33e98, size 0x4, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

  /// @brief Convert to "::System::Security::ISecurityEncodable"
  constexpr ::System::Security::ISecurityEncodable* i___System__Security__ISecurityEncodable() noexcept;

  static inline void setStaticF_action(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  static inline void setStaticF_psUnrestricted(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PermissionSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PermissionSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PermissionSet(PermissionSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PermissionSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PermissionSet(PermissionSet const&) = delete;

  /// @brief Field state, offset: 0x10, size: 0x4, def value: None
  ::System::Security::Permissions::PermissionState ___state;

  /// @brief Field list, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___list;

  /// @brief Field _declsec, offset: 0x20, size: 0x1, def value: None
  bool ____declsec;

  /// @brief Field _ignored, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ____ignored;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2887 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::PermissionSet, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Security::PermissionSet, ___state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::PermissionSet, ___list) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::PermissionSet, ____declsec) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::PermissionSet, ____ignored) == 0x28, "Offset mismatch!");

} // namespace System::Security
NEED_NO_BOX(::System::Security::PermissionSet);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::PermissionSet*, "System.Security", "PermissionSet");
