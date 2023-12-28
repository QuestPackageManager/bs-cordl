#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Permissions/zzzz__PermissionState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PermissionSet)
namespace System::Security {
class ISecurityEncodable;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class ICollection;
}
namespace System::Security {
class IPermission;
}
namespace System::Security {
class SecurityElement;
}
namespace System {
class Array;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Security::Permissions {
struct PermissionState;
}
// Forward declare root types
namespace System::Security {
class PermissionSet;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::PermissionSet);
// Type: System.Security::PermissionSet
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2902))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2884))
// CS Name: ::System.Security::PermissionSet*
class CORDL_TYPE PermissionSet : public ::System::Object {
public:
  // Declarations
  /// @brief Field state, offset 0x10, size 0x4
  __declspec(property(get = __get_state, put = __set_state))::System::Security::Permissions::PermissionState state;

  /// @brief Field list, offset 0x18, size 0x8
  __declspec(property(get = __get_list, put = __set_list))::System::Collections::ArrayList* list;

  /// @brief Field _declsec, offset 0x20, size 0x1
  __declspec(property(get = __get__declsec, put = __set__declsec)) bool _declsec;

  /// @brief Field _ignored, offset 0x28, size 0x8
  __declspec(property(get = __get__ignored, put = __set__ignored))::ArrayW<bool, ::Array<bool>*> _ignored;

  /// @brief Field psUnrestricted, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_psUnrestricted, put = setStaticF_psUnrestricted))::ArrayW<::System::Object*, ::Array<::System::Object*>*> psUnrestricted;

  /// @brief Field action, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_action, put = setStaticF_action))::ArrayW<::System::Object*, ::Array<::System::Object*>*> action;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  /// @brief Convert operator to "::System::Security::ISecurityEncodable"
  constexpr operator ::System::Security::ISecurityEncodable*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  constexpr ::System::Security::Permissions::PermissionState& __get_state();

  constexpr ::System::Security::Permissions::PermissionState const& __get_state() const;

  constexpr void __set_state(::System::Security::Permissions::PermissionState value);

  constexpr ::System::Collections::ArrayList*& __get_list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get_list() const;

  constexpr void __set_list(::System::Collections::ArrayList* value);

  constexpr bool& __get__declsec();

  constexpr bool const& __get__declsec() const;

  constexpr void __set__declsec(bool value);

  constexpr ::ArrayW<bool, ::Array<bool>*>& __get__ignored();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __get__ignored() const;

  constexpr void __set__ignored(::ArrayW<bool, ::Array<bool>*> value);

  static inline void setStaticF_psUnrestricted(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> getStaticF_psUnrestricted();

  static inline void setStaticF_action(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> getStaticF_action();

  static inline ::System::Security::PermissionSet* New_ctor();

  /// @brief Method .ctor addr 0x245168c size 0x6c virtual false final false
  inline void _ctor();

  static inline ::System::Security::PermissionSet* New_ctor(::System::Security::Permissions::PermissionState state);

  /// @brief Method .ctor addr 0x2451778 size 0x30 virtual false final false
  inline void _ctor(::System::Security::Permissions::PermissionState state);

  static inline ::System::Security::PermissionSet* New_ctor(::System::Security::IPermission* perm);

  /// @brief Method .ctor addr 0x2451160 size 0x4c virtual false final false
  inline void _ctor(::System::Security::IPermission* perm);

  /// @brief Method CopyTo addr 0x2452014 size 0x178 virtual true final false
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method Demand addr 0x245218c size 0x228 virtual true final true
  inline void Demand();

  /// @brief Method CasOnlyDemand addr 0x24511ac size 0x78 virtual false final false
  inline void CasOnlyDemand(int32_t skip);

  /// @brief Method GetEnumerator addr 0x2452764 size 0x24 virtual true final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method IsEmpty addr 0x24523b4 size 0x3a0 virtual false final false
  inline bool IsEmpty();

  /// @brief Method IsUnrestricted addr 0x2452754 size 0x10 virtual false final false
  inline bool IsUnrestricted();

  /// @brief Method ToString addr 0x2452788 size 0x2c virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToXml addr 0x2451910 size 0x45c virtual true final false
  inline ::System::Security::SecurityElement* ToXml();

  /// @brief Method get_Count addr 0x24527b4 size 0x24 virtual true final false
  inline int32_t get_Count();

  /// @brief Method get_IsSynchronized addr 0x24527d8 size 0x24 virtual true final false
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot addr 0x24527fc size 0x4 virtual true final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x2452800 size 0x4 virtual true final true
  inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender);

  /// @brief Method Equals addr 0x2451dfc size 0x19c virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2451fd0 size 0x44 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "PermissionSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PermissionSet(PermissionSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PermissionSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PermissionSet(PermissionSet const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PermissionSet();

public:
  /// @brief Field state, offset: 0x10, size: 0x4, def value: None
  ::System::Security::Permissions::PermissionState ___state;

  /// @brief Field list, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___list;

  /// @brief Field _declsec, offset: 0x20, size: 0x1, def value: None
  bool ____declsec;

  /// @brief Field _ignored, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ____ignored;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::PermissionSet, 0x30>, "Size mismatch!");

} // namespace System::Security
NEED_NO_BOX(::System::Security::PermissionSet);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::PermissionSet*, "System.Security", "PermissionSet");
