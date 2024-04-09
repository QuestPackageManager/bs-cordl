#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultReferenceResolver)
namespace Newtonsoft::Json::Serialization {
class IReferenceResolver;
}
namespace Newtonsoft::Json::Utilities {
template <typename TFirst, typename TSecond> class BidirectionalDictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class DefaultReferenceResolver;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::DefaultReferenceResolver);
// Type: Newtonsoft.Json.Serialization::DefaultReferenceResolver
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Serialization::DefaultReferenceResolver*
class CORDL_TYPE DefaultReferenceResolver : public ::System::Object {
public:
  // Declarations
  /// @brief Field _referenceCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__referenceCount, put = __cordl_internal_set__referenceCount)) int32_t _referenceCount;

  /// @brief Convert operator to "::Newtonsoft::Json::Serialization::IReferenceResolver"
  constexpr operator ::Newtonsoft::Json::Serialization::IReferenceResolver*() noexcept;

  /// @brief Method AddReference, addr 0x2929404, size 0x6c, virtual true, abstract: false, final true
  inline void AddReference(::System::Object* context, ::StringW reference, ::System::Object* value);

  /// @brief Method GetMappings, addr 0x292907c, size 0x110, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>* GetMappings(::System::Object* context);

  /// @brief Method GetReference, addr 0x2929310, size 0xf4, virtual true, abstract: false, final true
  inline ::StringW GetReference(::System::Object* context, ::System::Object* value);

  /// @brief Method IsReferenced, addr 0x2929470, size 0x74, virtual true, abstract: false, final true
  inline bool IsReferenced(::System::Object* context, ::System::Object* value);

  static inline ::Newtonsoft::Json::Serialization::DefaultReferenceResolver* New_ctor();

  /// @brief Method ResolveReference, addr 0x292929c, size 0x74, virtual true, abstract: false, final true
  inline ::System::Object* ResolveReference(::System::Object* context, ::StringW reference);

  constexpr int32_t const& __cordl_internal_get__referenceCount() const;

  constexpr int32_t& __cordl_internal_get__referenceCount();

  constexpr void __cordl_internal_set__referenceCount(int32_t value);

  /// @brief Method .ctor, addr 0x29294e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Newtonsoft::Json::Serialization::IReferenceResolver"
  constexpr ::Newtonsoft::Json::Serialization::IReferenceResolver* i___Newtonsoft__Json__Serialization__IReferenceResolver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultReferenceResolver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultReferenceResolver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultReferenceResolver(DefaultReferenceResolver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultReferenceResolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultReferenceResolver(DefaultReferenceResolver const&) = delete;

  /// @brief Field _referenceCount, offset: 0x10, size: 0x4, def value: None
  int32_t ____referenceCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::DefaultReferenceResolver, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::DefaultReferenceResolver, ____referenceCount) == 0x10, "Offset mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::DefaultReferenceResolver);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::DefaultReferenceResolver*, "Newtonsoft.Json.Serialization", "DefaultReferenceResolver");
