#pragma once
// IWYU pragma private; include "System/Resources/ResourceLocator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceLocator)
namespace System::Resources {
struct ResourceTypeCode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Resources {
struct ResourceLocator;
}
// Write type traits
MARK_VAL_T(::System::Resources::ResourceLocator);
// Dependencies
namespace System::Resources {
// Is value type: true
// CS Name: System.Resources.ResourceLocator
struct CORDL_TYPE ResourceLocator {
public:
  // Declarations
  __declspec(property(get = get_DataPosition)) int32_t DataPosition;

  __declspec(property(get = get_Value, put = set_Value)) ::System::Object* Value;

  /// @brief Method CanCache, addr 0x3d1e510, size 0xc, virtual false, abstract: false, final false
  static inline bool CanCache(::System::Resources::ResourceTypeCode value);

  /// @brief Method .ctor, addr 0x3d1e51c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t dataPos, ::System::Object* value);

  /// @brief Method get_DataPosition, addr 0x3d1fd64, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_DataPosition();

  /// @brief Method get_Value, addr 0x3d1fd6c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Value();

  /// @brief Method set_Value, addr 0x3d1fd74, size 0x8, virtual false, abstract: false, final false
  inline void set_Value(::System::Object* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceLocator();

  // Ctor Parameters [CppParam { name: "_value", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_dataPos", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ResourceLocator(::System::Object* _value, int32_t _dataPos) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3438 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _value, offset: 0x0, size: 0x8, def value: None
  ::System::Object* _value;

  /// @brief Field _dataPos, offset: 0x8, size: 0x4, def value: None
  int32_t _dataPos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Resources::ResourceLocator, _value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceLocator, _dataPos) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Resources::ResourceLocator, 0x10>, "Size mismatch!");

} // namespace System::Resources
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::ResourceLocator, "System.Resources", "ResourceLocator");
