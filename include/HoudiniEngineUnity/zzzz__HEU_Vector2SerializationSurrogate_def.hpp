#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HEU_Vector2SerializationSurrogate)
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
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
namespace HoudiniEngineUnity {
class HEU_Vector2SerializationSurrogate;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_Vector2SerializationSurrogate);
// Type: HoudiniEngineUnity::HEU_Vector2SerializationSurrogate
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_Vector2SerializationSurrogate*
class CORDL_TYPE HEU_Vector2SerializationSurrogate : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializationSurrogate"
  constexpr operator ::System::Runtime::Serialization::ISerializationSurrogate*() noexcept;

  static inline ::HoudiniEngineUnity::HEU_Vector2SerializationSurrogate* New_ctor();

  /// @brief Method System.Runtime.Serialization.ISerializationSurrogate.GetObjectData, addr 0x25345b0, size 0xc8, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializationSurrogate_GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                                 ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method System.Runtime.Serialization.ISerializationSurrogate.SetObjectData, addr 0x2534678, size 0x198, virtual true, abstract: false, final true
  inline ::System::Object* System_Runtime_Serialization_ISerializationSurrogate_SetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                                              ::System::Runtime::Serialization::StreamingContext context,
                                                                                              ::System::Runtime::Serialization::ISurrogateSelector* selector);

  /// @brief Method .ctor, addr 0x25336c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializationSurrogate"
  constexpr ::System::Runtime::Serialization::ISerializationSurrogate* i___System__Runtime__Serialization__ISerializationSurrogate() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_Vector2SerializationSurrogate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_Vector2SerializationSurrogate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_Vector2SerializationSurrogate(HEU_Vector2SerializationSurrogate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_Vector2SerializationSurrogate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_Vector2SerializationSurrogate(HEU_Vector2SerializationSurrogate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_Vector2SerializationSurrogate, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Vector2SerializationSurrogate);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Vector2SerializationSurrogate*, "HoudiniEngineUnity", "HEU_Vector2SerializationSurrogate");
