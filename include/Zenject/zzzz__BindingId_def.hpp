#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BindingId)
namespace System {
class Type;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
struct BindingId;
}
// Write type traits
MARK_VAL_T(::Zenject::BindingId);
// Type: Zenject::BindingId
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11086))
// CS Name: ::Zenject::BindingId
struct CORDL_TYPE BindingId {
public:
  // Declarations
  __declspec(property(get = get_Type, put = set_Type))::System::Type* Type;

  __declspec(property(get = get_Identifier, put = set_Identifier))::System::Object* Identifier;

  /// @brief Convert operator to "::System::IEquatable_1<::Zenject::BindingId>"
  constexpr operator ::System::IEquatable_1<::Zenject::BindingId>*();

  /// @brief Method .ctor addr 0x2d7d690 size 0x8 virtual false final false
  inline void _ctor(::System::Type* type, ::System::Object* identifier);

  /// @brief Method get_Type addr 0x2d8e484 size 0x8 virtual false final false
  inline ::System::Type* get_Type();

  /// @brief Method set_Type addr 0x2d8e48c size 0x8 virtual false final false
  inline void set_Type(::System::Type* value);

  /// @brief Method get_Identifier addr 0x2d8e494 size 0x8 virtual false final false
  inline ::System::Object* get_Identifier();

  /// @brief Method set_Identifier addr 0x2d8e49c size 0x8 virtual false final false
  inline void set_Identifier(::System::Object* value);

  /// @brief Method ToString addr 0x2d8e4a4 size 0x120 virtual true final false
  inline ::StringW ToString();

  /// @brief Method GetHashCode addr 0x2d8e5c4 size 0x50 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x2d8e614 size 0x84 virtual true final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals addr 0x2d8e73c size 0x18 virtual true final true
  inline bool Equals(::Zenject::BindingId that);

  /// @brief Method op_Equality addr 0x2d8e698 size 0xa4 virtual false final false
  static inline bool op_Equality(::Zenject::BindingId left, ::Zenject::BindingId right);

  /// @brief Method op_Inequality addr 0x2d8e754 size 0x18 virtual false final false
  static inline bool op_Inequality(::Zenject::BindingId left, ::Zenject::BindingId right);

  // Ctor Parameters [CppParam { name: "_type", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "_identifier", ty: "::System::Object*", modifiers: "", def_value: None }]
  constexpr BindingId(::System::Type* _type, ::System::Object* _identifier) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingId();

  /// @brief Field _type, offset: 0x0, size: 0x8, def value: None
  ::System::Type* _type;

  /// @brief Field _identifier, offset: 0x8, size: 0x8, def value: None
  ::System::Object* _identifier;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::BindingId, 0x10>, "Size mismatch!");

static_assert(offsetof(::Zenject::BindingId, _type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Zenject::BindingId, _identifier) == 0x8, "Offset mismatch!");

} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::BindingId, "Zenject", "BindingId");
