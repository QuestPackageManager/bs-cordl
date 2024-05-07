#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/TypeInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeInfo)
namespace System::Runtime::Remoting {
class IRemotingTypeInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class TypeInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::TypeInfo);
// Type: System.Runtime.Remoting::TypeInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: ::System.Runtime.Remoting::TypeInfo*
class CORDL_TYPE TypeInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_TypeName))::StringW TypeName;

  /// @brief Field interfacesImplemented, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_interfacesImplemented, put = __cordl_internal_set_interfacesImplemented))::ArrayW<::StringW, ::Array<::StringW>*> interfacesImplemented;

  /// @brief Field serverHierarchy, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_serverHierarchy, put = __cordl_internal_set_serverHierarchy))::ArrayW<::StringW, ::Array<::StringW>*> serverHierarchy;

  /// @brief Field serverType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_serverType, put = __cordl_internal_set_serverType))::StringW serverType;

  /// @brief Convert operator to "::System::Runtime::Remoting::IRemotingTypeInfo"
  constexpr operator ::System::Runtime::Remoting::IRemotingTypeInfo*() noexcept;

  /// @brief Method CanCastTo, addr 0x28177cc, size 0x26c, virtual true, abstract: false, final true
  inline bool CanCastTo(::System::Type* fromType, ::System::Object* o);

  static inline ::System::Runtime::Remoting::TypeInfo* New_ctor(::System::Type* type);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_interfacesImplemented() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_interfacesImplemented();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_serverHierarchy() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_serverHierarchy();

  constexpr ::StringW const& __cordl_internal_get_serverType() const;

  constexpr ::StringW& __cordl_internal_get_serverType();

  constexpr void __cordl_internal_set_interfacesImplemented(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_serverHierarchy(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_serverType(::StringW value);

  /// @brief Method .ctor, addr 0x2815038, size 0x410, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method get_TypeName, addr 0x28177c4, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_TypeName();

  /// @brief Convert to "::System::Runtime::Remoting::IRemotingTypeInfo"
  constexpr ::System::Runtime::Remoting::IRemotingTypeInfo* i___System__Runtime__Remoting__IRemotingTypeInfo() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeInfo(TypeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeInfo(TypeInfo const&) = delete;

  /// @brief Field serverType, offset: 0x10, size: 0x8, def value: None
  ::StringW ___serverType;

  /// @brief Field serverHierarchy, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___serverHierarchy;

  /// @brief Field interfacesImplemented, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___interfacesImplemented;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::TypeInfo, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::TypeInfo, ___serverType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::TypeInfo, ___serverHierarchy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::TypeInfo, ___interfacesImplemented) == 0x20, "Offset mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::TypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::TypeInfo*, "System.Runtime.Remoting", "TypeInfo");
