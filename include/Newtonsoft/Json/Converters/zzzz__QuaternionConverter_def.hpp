#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(QuaternionConverter)
namespace Newtonsoft::Json::Converters {
class __QuaternionConverter____c;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System {
class Object;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json::Linq {
class JProperty;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class QuaternionConverter;
}
namespace Newtonsoft::Json::Converters {
class __QuaternionConverter____c;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::QuaternionConverter);
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::__QuaternionConverter____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12038))
// CS Name: ::QuaternionConverter::<>c*
class CORDL_TYPE __QuaternionConverter____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Newtonsoft::Json::Converters::__QuaternionConverter____c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0))::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, bool>* __9__2_0;

  /// @brief Field <>9__2_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_1, put = setStaticF___9__2_1))::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, bool>* __9__2_1;

  /// @brief Field <>9__2_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_2, put = setStaticF___9__2_2))::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, bool>* __9__2_2;

  /// @brief Field <>9__2_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_3, put = setStaticF___9__2_3))::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, bool>* __9__2_3;

  /// @brief Field <>9__2_4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_4, put = setStaticF___9__2_4))::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, bool>* __9__2_4;

  static inline void setStaticF___9(::Newtonsoft::Json::Converters::__QuaternionConverter____c* value);

  static inline ::Newtonsoft::Json::Converters::__QuaternionConverter____c* getStaticF___9();

  static inline void setStaticF___9__2_0(::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, bool>* value);

  static inline ::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, bool>* getStaticF___9__2_0();

  static inline void setStaticF___9__2_1(::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, bool>* value);

  static inline ::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, bool>* getStaticF___9__2_1();

  static inline void setStaticF___9__2_2(::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, bool>* value);

  static inline ::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, bool>* getStaticF___9__2_2();

  static inline void setStaticF___9__2_3(::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, bool>* value);

  static inline ::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, bool>* getStaticF___9__2_3();

  static inline void setStaticF___9__2_4(::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, bool>* value);

  static inline ::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, bool>* getStaticF___9__2_4();

  static inline ::Newtonsoft::Json::Converters::__QuaternionConverter____c* New_ctor();

  /// @brief Method .ctor addr 0x26b61ac size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ReadJson>b__2_0 addr 0x26b61b4 size 0x54 virtual false final false
  inline bool _ReadJson_b__2_0(::Newtonsoft::Json::Linq::JProperty* p);

  /// @brief Method <ReadJson>b__2_1 addr 0x26b6208 size 0x54 virtual false final false
  inline bool _ReadJson_b__2_1(::Newtonsoft::Json::Linq::JProperty* p);

  /// @brief Method <ReadJson>b__2_2 addr 0x26b625c size 0x54 virtual false final false
  inline bool _ReadJson_b__2_2(::Newtonsoft::Json::Linq::JProperty* p);

  /// @brief Method <ReadJson>b__2_3 addr 0x26b62b0 size 0x54 virtual false final false
  inline bool _ReadJson_b__2_3(::Newtonsoft::Json::Linq::JProperty* p);

  /// @brief Method <ReadJson>b__2_4 addr 0x26b6304 size 0x54 virtual false final false
  inline bool _ReadJson_b__2_4(::Newtonsoft::Json::Linq::JProperty* p);

  // Ctor Parameters [CppParam { name: "", ty: "__QuaternionConverter____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __QuaternionConverter____c(__QuaternionConverter____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__QuaternionConverter____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __QuaternionConverter____c(__QuaternionConverter____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __QuaternionConverter____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::__QuaternionConverter____c, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
// Type: Newtonsoft.Json.Converters::QuaternionConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11830))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12039))
// CS Name: ::Newtonsoft.Json.Converters::QuaternionConverter*
class CORDL_TYPE QuaternionConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  using __c = ::Newtonsoft::Json::Converters::__QuaternionConverter____c;

  __declspec(property(get = get_CanRead)) bool CanRead;

  /// @brief Method WriteJson addr 0x26b5784 size 0x334 virtual true final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method CanConvert addr 0x26b5ab8 size 0x84 virtual true final false
  inline bool CanConvert(::System::Type* objectType);

  /// @brief Method ReadJson addr 0x26b5b3c size 0x5fc virtual true final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method get_CanRead addr 0x26b6138 size 0x8 virtual true final false
  inline bool get_CanRead();

  static inline ::Newtonsoft::Json::Converters::QuaternionConverter* New_ctor();

  /// @brief Method .ctor addr 0x26b6140 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "QuaternionConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuaternionConverter(QuaternionConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuaternionConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuaternionConverter(QuaternionConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuaternionConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::QuaternionConverter, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::QuaternionConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::QuaternionConverter*, "Newtonsoft.Json.Converters", "QuaternionConverter");
NEED_NO_BOX(::Newtonsoft::Json::Converters::__QuaternionConverter____c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::__QuaternionConverter____c*, "Newtonsoft.Json.Converters", "QuaternionConverter/<>c");
