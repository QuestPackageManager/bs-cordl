#pragma once
// IWYU pragma private; include "BGNet/Core/DefaultTimeProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultTimeProvider)
namespace BGNet::Core {
class ITimeProvider;
}
// Forward declare root types
namespace BGNet::Core {
class DefaultTimeProvider;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::DefaultTimeProvider);
// Type: BGNet.Core::DefaultTimeProvider
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGNet::Core {
// Is value type: false
// CS Name: ::BGNet.Core::DefaultTimeProvider*
class CORDL_TYPE DefaultTimeProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_instance, addr 0x10c318c, size 0x58, virtual false, abstract: false, final false
  static inline ::BGNet::Core::ITimeProvider* get_instance();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultTimeProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultTimeProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultTimeProvider(DefaultTimeProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultTimeProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultTimeProvider(DefaultTimeProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::DefaultTimeProvider, 0x10>, "Size mismatch!");

} // namespace BGNet::Core
NEED_NO_BOX(::BGNet::Core::DefaultTimeProvider);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::DefaultTimeProvider*, "BGNet.Core", "DefaultTimeProvider");
