#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/IRemotingTypeInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IRemotingTypeInfo)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class IRemotingTypeInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::IRemotingTypeInfo);
// Dependencies
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: System.Runtime.Remoting.IRemotingTypeInfo
class CORDL_TYPE IRemotingTypeInfo {
public:
  // Declarations
  __declspec(property(get = get_TypeName)) ::StringW TypeName;

  /// @brief Method CanCastTo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool CanCastTo(::System::Type* fromType, ::System::Object* o);

  /// @brief Method get_TypeName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_TypeName();

  // Ctor Parameters [CppParam { name: "", ty: "IRemotingTypeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRemotingTypeInfo(IRemotingTypeInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3058 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::IRemotingTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::IRemotingTypeInfo*, "System.Runtime.Remoting", "IRemotingTypeInfo");
