#pragma once
// IWYU pragma private; include "System/Data/PropertyCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
CORDL_MODULE_EXPORT(PropertyCollection)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class PropertyCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::PropertyCollection);
// Dependencies System.Collections.Hashtable, System.ICloneable
namespace System::Data {
// Is value type: false
// CS Name: System.Data.PropertyCollection
class CORDL_TYPE PropertyCollection : public ::System::Collections::Hashtable {
public:
  // Declarations
  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Clone, addr 0x4186154, size 0x2fc, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  static inline ::System::Data::PropertyCollection* New_ctor();

  static inline ::System::Data::PropertyCollection* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x4186144, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x418614c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyCollection(PropertyCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyCollection(PropertyCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11447 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::PropertyCollection, 0x50>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::PropertyCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::PropertyCollection*, "System.Data", "PropertyCollection");
