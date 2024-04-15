#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CrossContextDelegate)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class CrossContextDelegate;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::CrossContextDelegate);
// Type: System.Runtime.Remoting.Contexts::CrossContextDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Contexts::CrossContextDelegate*
class CORDL_TYPE CrossContextDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2722824, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::System::Runtime::Remoting::Contexts::CrossContextDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2722768, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrossContextDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CrossContextDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrossContextDelegate(CrossContextDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrossContextDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrossContextDelegate(CrossContextDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Contexts::CrossContextDelegate, 0x80>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Contexts
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::CrossContextDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::CrossContextDelegate*, "System.Runtime.Remoting.Contexts", "CrossContextDelegate");
