#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/SurrogateKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SurrogateKey)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SurrogateKey;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SurrogateKey);
// Dependencies System.Object, System.Runtime.Serialization.StreamingContext
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.SurrogateKey
class CORDL_TYPE SurrogateKey : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_context, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_m_context, put = __cordl_internal_set_m_context)) ::System::Runtime::Serialization::StreamingContext m_context;

  /// @brief Field m_type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_type, put = __cordl_internal_set_m_type)) ::System::Type* m_type;

  /// @brief Method GetHashCode, addr 0x3cfece0, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Runtime::Serialization::SurrogateKey* New_ctor(::System::Type* type, ::System::Runtime::Serialization::StreamingContext context);

  constexpr ::System::Runtime::Serialization::StreamingContext const& __cordl_internal_get_m_context() const;

  constexpr ::System::Runtime::Serialization::StreamingContext& __cordl_internal_get_m_context();

  constexpr ::System::Type* const& __cordl_internal_get_m_type() const;

  constexpr ::System::Type*& __cordl_internal_get_m_type();

  constexpr void __cordl_internal_set_m_context(::System::Runtime::Serialization::StreamingContext value);

  constexpr void __cordl_internal_set_m_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x3cfeab0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Runtime::Serialization::StreamingContext context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SurrogateKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SurrogateKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SurrogateKey(SurrogateKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SurrogateKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SurrogateKey(SurrogateKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3238 };

  /// @brief Field m_type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___m_type;

  /// @brief Field m_context, offset: 0x18, size: 0x10, def value: None
  ::System::Runtime::Serialization::StreamingContext ___m_context;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::SurrogateKey, ___m_type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SurrogateKey, ___m_context) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SurrogateKey, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SurrogateKey);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SurrogateKey*, "System.Runtime.Serialization", "SurrogateKey");
