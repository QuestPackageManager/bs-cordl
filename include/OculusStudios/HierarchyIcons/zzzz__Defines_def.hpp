#pragma once
// IWYU pragma private; include "OculusStudios/HierarchyIcons/Defines.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Defines)
namespace OculusStudios::HierarchyIcons {
struct Icon;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace OculusStudios::HierarchyIcons {
class Defines;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::HierarchyIcons::Defines);
// Dependencies System.Object
namespace OculusStudios::HierarchyIcons {
// Is value type: false
// CS Name: OculusStudios.HierarchyIcons.Defines
class CORDL_TYPE Defines : public ::System::Object {
public:
  // Declarations
  /// @brief Field iconDatabase, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_iconDatabase, put = setStaticF_iconDatabase)) ::System::Collections::Generic::Dictionary_2<::OculusStudios::HierarchyIcons::Icon, ::StringW>* iconDatabase;

  static inline ::OculusStudios::HierarchyIcons::Defines* New_ctor();

  /// @brief Method .ctor, addr 0x5d7f494, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::OculusStudios::HierarchyIcons::Icon, ::StringW>* getStaticF_iconDatabase();

  static inline void setStaticF_iconDatabase(::System::Collections::Generic::Dictionary_2<::OculusStudios::HierarchyIcons::Icon, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Defines();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Defines", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Defines(Defines&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Defines", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Defines(Defines const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23238 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OculusStudios::HierarchyIcons::Defines, 0x10>, "Size mismatch!");

} // namespace OculusStudios::HierarchyIcons
NEED_NO_BOX(::OculusStudios::HierarchyIcons::Defines);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::HierarchyIcons::Defines*, "OculusStudios.HierarchyIcons", "Defines");
