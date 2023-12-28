#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(SurrogateSelector)
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SurrogateHashtable;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SurrogateSelector;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SurrogateSelector);
// Type: System.Runtime.Serialization::SurrogateSelector
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3237))
// CS Name: ::System.Runtime.Serialization::SurrogateSelector*
class CORDL_TYPE SurrogateSelector : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_surrogates, offset 0x10, size 0x8
  __declspec(property(get = __get_m_surrogates, put = __set_m_surrogates))::System::Runtime::Serialization::SurrogateHashtable* m_surrogates;

  /// @brief Field m_nextSelector, offset 0x18, size 0x8
  __declspec(property(get = __get_m_nextSelector, put = __set_m_nextSelector))::System::Runtime::Serialization::ISurrogateSelector* m_nextSelector;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISurrogateSelector"
  constexpr operator ::System::Runtime::Serialization::ISurrogateSelector*() noexcept;

  constexpr ::System::Runtime::Serialization::SurrogateHashtable*& __get_m_surrogates();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SurrogateHashtable*> const& __get_m_surrogates() const;

  constexpr void __set_m_surrogates(::System::Runtime::Serialization::SurrogateHashtable* value);

  constexpr ::System::Runtime::Serialization::ISurrogateSelector*& __get_m_nextSelector();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ISurrogateSelector*> const& __get_m_nextSelector() const;

  constexpr void __set_m_nextSelector(::System::Runtime::Serialization::ISurrogateSelector* value);

  static inline ::System::Runtime::Serialization::SurrogateSelector* New_ctor();

  /// @brief Method .ctor addr 0x24bf9d0 size 0x70 virtual false final false
  inline void _ctor();

  /// @brief Method AddSurrogate addr 0x24bfa48 size 0x14c virtual true final false
  inline void AddSurrogate(::System::Type* type, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::ISerializationSurrogate* surrogate);

  /// @brief Method GetSurrogate addr 0x24bfbd0 size 0x1fc virtual true final false
  inline ::System::Runtime::Serialization::ISerializationSurrogate* GetSurrogate(::System::Type* type, ::System::Runtime::Serialization::StreamingContext context,
                                                                                 ByRef<::System::Runtime::Serialization::ISurrogateSelector*> selector);

  // Ctor Parameters [CppParam { name: "", ty: "SurrogateSelector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SurrogateSelector(SurrogateSelector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SurrogateSelector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SurrogateSelector(SurrogateSelector const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SurrogateSelector();

public:
  /// @brief Field m_surrogates, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Serialization::SurrogateHashtable* ___m_surrogates;

  /// @brief Field m_nextSelector, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::Serialization::ISurrogateSelector* ___m_nextSelector;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SurrogateSelector, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SurrogateSelector);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SurrogateSelector*, "System.Runtime.Serialization", "SurrogateSelector");
