#pragma once
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
class Type;
}
namespace System {
class Object;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3079))
// CS Name: ::System.Runtime.Remoting::TypeInfo*
class CORDL_TYPE TypeInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field serverType, offset 0x10, size 0x8
  __declspec(property(get = __get_serverType, put = __set_serverType))::StringW serverType;

  /// @brief Field serverHierarchy, offset 0x18, size 0x8
  __declspec(property(get = __get_serverHierarchy, put = __set_serverHierarchy))::ArrayW<::StringW, ::Array<::StringW>*> serverHierarchy;

  /// @brief Field interfacesImplemented, offset 0x20, size 0x8
  __declspec(property(get = __get_interfacesImplemented, put = __set_interfacesImplemented))::ArrayW<::StringW, ::Array<::StringW>*> interfacesImplemented;

  __declspec(property(get = get_TypeName))::StringW TypeName;

  /// @brief Convert operator to "::System::Runtime::Remoting::IRemotingTypeInfo"
  constexpr operator ::System::Runtime::Remoting::IRemotingTypeInfo*() noexcept;

  constexpr ::StringW& __get_serverType();

  constexpr ::StringW const& __get_serverType() const;

  constexpr void __set_serverType(::StringW value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_serverHierarchy();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_serverHierarchy() const;

  constexpr void __set_serverHierarchy(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_interfacesImplemented();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_interfacesImplemented() const;

  constexpr void __set_interfacesImplemented(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline ::System::Runtime::Remoting::TypeInfo* New_ctor(::System::Type* type);

  /// @brief Method .ctor addr 0x233a244 size 0x410 virtual false final false
  inline void _ctor(::System::Type* type);

  /// @brief Method get_TypeName addr 0x233cb60 size 0x8 virtual true final true
  inline ::StringW get_TypeName();

  /// @brief Method CanCastTo addr 0x233cb68 size 0x26c virtual true final true
  inline bool CanCastTo(::System::Type* fromType, ::System::Object* o);

  // Ctor Parameters [CppParam { name: "", ty: "TypeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeInfo(TypeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeInfo(TypeInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeInfo();

public:
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
