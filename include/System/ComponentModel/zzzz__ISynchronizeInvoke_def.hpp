#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ISynchronizeInvoke)
namespace System {
class Delegate;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace System::ComponentModel {
class ISynchronizeInvoke;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ISynchronizeInvoke);
// Type: System.ComponentModel::ISynchronizeInvoke
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9398))
// CS Name: ::System.ComponentModel::ISynchronizeInvoke*
class CORDL_TYPE ISynchronizeInvoke {
public:
  // Declarations
  __declspec(property(get = get_InvokeRequired)) bool InvokeRequired;

  /// @brief Method get_InvokeRequired, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_InvokeRequired();

  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Delegate* method, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  // Ctor Parameters [CppParam { name: "", ty: "ISynchronizeInvoke", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISynchronizeInvoke(ISynchronizeInvoke&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISynchronizeInvoke", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISynchronizeInvoke(ISynchronizeInvoke const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ISynchronizeInvoke);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ISynchronizeInvoke*, "System.ComponentModel", "ISynchronizeInvoke");
