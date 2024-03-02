#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IHashCodeProvider)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
class IHashCodeProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::IHashCodeProvider);
// Type: System.Collections::IHashCodeProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// CS Name: ::System.Collections::IHashCodeProvider*
class CORDL_TYPE IHashCodeProvider {
public:
  // Declarations
  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetHashCode(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "IHashCodeProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IHashCodeProvider(IHashCodeProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IHashCodeProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IHashCodeProvider(IHashCodeProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections
NEED_NO_BOX(::System::Collections::IHashCodeProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::IHashCodeProvider*, "System.Collections", "IHashCodeProvider");
