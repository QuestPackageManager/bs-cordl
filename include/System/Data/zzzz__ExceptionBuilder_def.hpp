#pragma once
// IWYU pragma private; include "System/Data/ExceptionBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExceptionBuilder)
namespace System::Data {
struct AggregateType;
}
namespace System::Data {
class Constraint;
}
namespace System::Data {
class DataColumn;
}
namespace System::Data {
struct DataRowState;
}
namespace System::Data {
struct DataSetDateTime;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
class ForeignKeyConstraint;
}
namespace System::Data {
struct RBTreeError;
}
namespace System::Data {
struct SerializationFormat;
}
namespace System::Data {
class UniqueConstraint;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class ExceptionBuilder;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::ExceptionBuilder);
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.ExceptionBuilder
class CORDL_TYPE ExceptionBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddExternalObject, addr 0x5e52ab4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* AddExternalObject();

  /// @brief Method AddNewNotAllowNull, addr 0x5e52910, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* AddNewNotAllowNull();

  /// @brief Method AddPrimaryKeyConstraint, addr 0x5e51cec, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* AddPrimaryKeyConstraint();

  /// @brief Method AggregateException, addr 0x5e54738, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Exception* AggregateException(::System::Data::AggregateType aggregateType, ::System::Type* type);

  /// @brief Method ArgumentNull, addr 0x5e490fc, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentNull(::StringW paramName);

  /// @brief Method ArgumentOutOfRange, addr 0x5e51640, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentOutOfRange(::StringW paramName);

  /// @brief Method AttributeValues, addr 0x5e54c14, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Exception* AttributeValues(::StringW name, ::StringW value1, ::StringW value2);

  /// @brief Method AutoIncrementAndDefaultValue, addr 0x5e4a318, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* AutoIncrementAndDefaultValue();

  /// @brief Method AutoIncrementAndExpression, addr 0x5e4a2d4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* AutoIncrementAndExpression();

  /// @brief Method AutoIncrementCannotSetIfHasData, addr 0x5e4a5b4, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* AutoIncrementCannotSetIfHasData(::StringW typeName);

  /// @brief Method AutoIncrementSeed, addr 0x5e4ff64, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* AutoIncrementSeed();

  /// @brief Method BadObjectPropertyAccess, addr 0x5e51698, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* BadObjectPropertyAccess(::StringW error);

  /// @brief Method BeginEditInRowChanging, addr 0x5e53304, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* BeginEditInRowChanging();

  /// @brief Method CanNotClear, addr 0x5e52af8, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* CanNotClear();

  /// @brief Method CanNotDelete, addr 0x5e529dc, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* CanNotDelete();

  /// @brief Method CanNotDeserializeObjectType, addr 0x5e55290, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* CanNotDeserializeObjectType();

  /// @brief Method CanNotRemoteDataTable, addr 0x5e5461c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* CanNotRemoteDataTable();

  /// @brief Method CanNotSerializeDataTableHierarchy, addr 0x5e545d8, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* CanNotSerializeDataTableHierarchy();

  /// @brief Method CanNotSerializeDataTableWithEmptyName, addr 0x5e546a4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* CanNotSerializeDataTableWithEmptyName();

  /// @brief Method CanNotSetRemotingFormat, addr 0x5e54660, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* CanNotSetRemotingFormat();

  /// @brief Method CanNotUse, addr 0x5e52888, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* CanNotUse();

  /// @brief Method CancelEditInRowChanging, addr 0x5e53348, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* CancelEditInRowChanging();

  /// @brief Method CannotAddColumn1, addr 0x5e519c4, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotAddColumn1(::StringW column);

  /// @brief Method CannotAddColumn2, addr 0x5e51a14, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotAddColumn2(::StringW column);

  /// @brief Method CannotAddColumn3, addr 0x5e4e3ec, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotAddColumn3();

  /// @brief Method CannotAddColumn4, addr 0x5e4e430, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotAddColumn4(::StringW column);

  /// @brief Method CannotAddDuplicate, addr 0x5e51a64, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotAddDuplicate(::StringW column);

  /// @brief Method CannotAddDuplicate2, addr 0x5e51ab4, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotAddDuplicate2(::StringW table);

  /// @brief Method CannotAddDuplicate3, addr 0x5e51b04, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotAddDuplicate3(::StringW table);

  /// @brief Method CannotChangeCaseLocale, addr 0x5e54054, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotChangeCaseLocale();

  /// @brief Method CannotChangeCaseLocale, addr 0x5e5405c, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotChangeCaseLocale(::System::Exception* innerException);

  /// @brief Method CannotChangeNamespace, addr 0x5e4d5b8, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotChangeNamespace(::StringW columnName);

  /// @brief Method CannotConvert, addr 0x5e551a8, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotConvert(::StringW name, ::StringW type);

  /// @brief Method CannotInstantiateAbstract, addr 0x5e54fd4, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotInstantiateAbstract(::StringW name);

  /// @brief Method CannotRemoveChildKey, addr 0x5e51bdc, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotRemoveChildKey(::StringW relation);

  /// @brief Method CannotRemoveColumn, addr 0x5e51b54, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotRemoveColumn();

  /// @brief Method CannotRemoveConstraint, addr 0x5e51c2c, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotRemoveConstraint(::StringW constraint, ::StringW table);

  /// @brief Method CannotRemoveExpression, addr 0x5e51c8c, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotRemoveExpression(::StringW column, ::StringW expression);

  /// @brief Method CannotRemovePrimaryKey, addr 0x5e51b98, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotRemovePrimaryKey();

  /// @brief Method CannotSetDateTimeModeForNonDateTimeColumns, addr 0x5e4c3e8, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotSetDateTimeModeForNonDateTimeColumns();

  /// @brief Method CannotSetMaxLength, addr 0x5e4d390, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotSetMaxLength(::System::Data::DataColumn* column, int32_t value);

  /// @brief Method CannotSetMaxLength2, addr 0x5e4cfac, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotSetMaxLength2(::System::Data::DataColumn* column);

  /// @brief Method CannotSetSimpleContent, addr 0x5e4e38c, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotSetSimpleContent(::StringW columnName, ::System::Type* type);

  /// @brief Method CannotSetSimpleContentType, addr 0x5e4c26c, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotSetSimpleContentType(::StringW columnName, ::System::Type* type);

  /// @brief Method CannotSetToNull, addr 0x5e52680, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotSetToNull(::System::Data::DataColumn* column);

  /// @brief Method CantAddConstraintToMultipleNestedTable, addr 0x5e52588, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* CantAddConstraintToMultipleNestedTable(::StringW tableName);

  /// @brief Method CantChangeDataType, addr 0x5e4bb3c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* CantChangeDataType();

  /// @brief Method CantChangeDateTimeMode, addr 0x5e4c42c, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Exception* CantChangeDateTimeMode(::System::Data::DataSetDateTime oldValue, ::System::Data::DataSetDateTime newValue);

  /// @brief Method CaseInsensitiveNameConflict, addr 0x5e51758, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* CaseInsensitiveNameConflict(::StringW name);

  /// @brief Method CaseLocaleMismatch, addr 0x5e54010, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* CaseLocaleMismatch();

  /// @brief Method ChildTableMismatch, addr 0x5e53f88, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* ChildTableMismatch();

  /// @brief Method CircularComplexType, addr 0x5e54f84, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* CircularComplexType(::StringW name);

  /// @brief Method ColumnNameRequired, addr 0x5e4b710, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* ColumnNameRequired();

  /// @brief Method ColumnNotInAnyTable, addr 0x5e5189c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* ColumnNotInAnyTable();

  /// @brief Method ColumnNotInTheTable, addr 0x5e5183c, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Exception* ColumnNotInTheTable(::StringW column, ::StringW table);

  /// @brief Method ColumnOutOfRange, addr 0x5e51974, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* ColumnOutOfRange(::StringW column);

  /// @brief Method ColumnOutOfRange, addr 0x5e518e0, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Exception* ColumnOutOfRange(int32_t index);

  /// @brief Method ColumnTypeConflict, addr 0x5e55158, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* ColumnTypeConflict(::StringW name);

  /// @brief Method ColumnTypeNotSupported, addr 0x5e49154, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Exception* ColumnTypeNotSupported();

  /// @brief Method ColumnsTypeMismatch, addr 0x5e4bd18, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* ColumnsTypeMismatch();

  /// @brief Method ConstraintAddFailed, addr 0x5e5230c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Exception* ConstraintAddFailed(::System::Data::DataTable* table);

  /// @brief Method ConstraintForeignTable, addr 0x5e52284, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* ConstraintForeignTable();

  /// @brief Method ConstraintOutOfRange, addr 0x5e52078, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Exception* ConstraintOutOfRange(int32_t index);

  /// @brief Method ConstraintParentValues, addr 0x5e522c8, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* ConstraintParentValues();

  /// @brief Method ConstraintRemoveFailed, addr 0x5e52364, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* ConstraintRemoveFailed();

  /// @brief Method ConstraintViolation, addr 0x5e52068, size 0x10, virtual false, abstract: false, final false
  static inline ::System::Exception* ConstraintViolation(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> columns,
                                                         ::ArrayW<::System::Object*, ::Array<::System::Object*>*> values);

  /// @brief Method ConstraintViolation, addr 0x5e51d74, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* ConstraintViolation(::StringW constraint);

  /// @brief Method ConvertFailed, addr 0x5e55598, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* ConvertFailed(::System::Type* type1, ::System::Type* type2);

  /// @brief Method CreateChildView, addr 0x5e52998, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateChildView();

  /// @brief Method DataSetUnsupportedSchema, addr 0x5e53968, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* DataSetUnsupportedSchema(::StringW ns);

  /// @brief Method DataTableInferenceNotSupported, addr 0x5e5544c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* DataTableInferenceNotSupported();

  /// @brief Method DatasetConflictingName, addr 0x5e54354, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* DatasetConflictingName(::StringW table);

  /// @brief Method DatatypeNotDefined, addr 0x5e54e5c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* DatatypeNotDefined();

  /// @brief Method DefaultValueAndAutoIncrement, addr 0x5e4c538, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* DefaultValueAndAutoIncrement();

  /// @brief Method DefaultValueColumnDataType, addr 0x5e4c57c, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Exception* DefaultValueColumnDataType(::StringW column, ::System::Type* defaultType, ::System::Type* columnType, ::System::Exception* inner);

  /// @brief Method DefaultValueDataType, addr 0x5e4c148, size 0x124, virtual false, abstract: false, final false
  static inline ::System::Exception* DefaultValueDataType(::StringW column, ::System::Type* defaultType, ::System::Type* columnType, ::System::Exception* inner);

  /// @brief Method DeleteInRowDeleting, addr 0x5e5338c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* DeleteInRowDeleting();

  /// @brief Method DeletedRowInaccessible, addr 0x5e53524, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* DeletedRowInaccessible();

  /// @brief Method DiffgramMissingSQL, addr 0x5e550c4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* DiffgramMissingSQL();

  /// @brief Method DiffgramMissingTable, addr 0x5e55074, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* DiffgramMissingTable(::StringW name);

  /// @brief Method DuplicateConstraint, addr 0x5e5210c, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* DuplicateConstraint(::StringW constraint);

  /// @brief Method DuplicateConstraintName, addr 0x5e5215c, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* DuplicateConstraintName(::StringW constraint);

  /// @brief Method DuplicateConstraintRead, addr 0x5e55108, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* DuplicateConstraintRead(::StringW str);

  /// @brief Method DuplicateDeclaration, addr 0x5e55500, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* DuplicateDeclaration(::StringW name);

  /// @brief Method DuplicateRelation, addr 0x5e53e28, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* DuplicateRelation(::StringW relation);

  /// @brief Method DuplicateTableName, addr 0x5e54254, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* DuplicateTableName(::StringW table);

  /// @brief Method DuplicateTableName2, addr 0x5e542a4, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Exception* DuplicateTableName2(::StringW table, ::StringW ns);

  /// @brief Method EditInRowChanging, addr 0x5e5327c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* EditInRowChanging();

  /// @brief Method ElementTypeNotFound, addr 0x5e54c7c, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* ElementTypeNotFound(::StringW name);

  /// @brief Method EndEditInRowChanging, addr 0x5e532c0, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* EndEditInRowChanging();

  /// @brief Method EnforceConstraint, addr 0x5e53fcc, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* EnforceConstraint();

  /// @brief Method EnumeratorModified, addr 0x5e55704, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* EnumeratorModified();

  /// @brief Method ExpressionAndConstraint, addr 0x5e4c70c, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionAndConstraint(::System::Data::DataColumn* column, ::System::Data::Constraint* constraint);

  /// @brief Method ExpressionAndReadOnly, addr 0x5e4c8dc, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionAndReadOnly();

  /// @brief Method ExpressionAndUnique, addr 0x5e4c6c8, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionAndUnique();

  /// @brief Method ExpressionCircular, addr 0x5e4c920, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionCircular();

  /// @brief Method ExpressionInConstraint, addr 0x5e525d8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionInConstraint(::System::Data::DataColumn* column);

  /// @brief Method FailedCascadeDelete, addr 0x5e523a8, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* FailedCascadeDelete(::StringW constraint);

  /// @brief Method FailedCascadeUpdate, addr 0x5e523f8, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* FailedCascadeUpdate(::StringW constraint);

  /// @brief Method FailedClearParentTable, addr 0x5e52448, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Exception* FailedClearParentTable(::StringW table, ::StringW constraint, ::StringW childTable);

  /// @brief Method ForeignKeyViolation, addr 0x5e524b0, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* ForeignKeyViolation(::StringW constraint, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> keys);

  /// @brief Method ForeignRelation, addr 0x5e52dfc, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* ForeignRelation();

  /// @brief Method FoundEntity, addr 0x5e55550, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* FoundEntity();

  /// @brief Method GetElementIndex, addr 0x5e52a20, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Exception* GetElementIndex(int32_t index);

  /// @brief Method GetParentRowTableMismatch, addr 0x5e52ee4, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Exception* GetParentRowTableMismatch(::StringW t1, ::StringW t2);

  /// @brief Method HasToBeStringType, addr 0x5e4d004, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Exception* HasToBeStringType(::System::Data::DataColumn* column);

  /// @brief Method IComparableNotImplemented, addr 0x5e52728, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* IComparableNotImplemented(::StringW typeName);

  /// @brief Method INullableUDTwithoutStaticNull, addr 0x5e526d8, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* INullableUDTwithoutStaticNull(::StringW typeName);

  /// @brief Method InValidNestedRelation, addr 0x5e53154, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* InValidNestedRelation(::StringW childTableName);

  /// @brief Method IndexKeyLength, addr 0x5e53b5c, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::Exception* IndexKeyLength(int32_t length, int32_t keyLength);

  /// @brief Method InsertExternalObject, addr 0x5e52b3c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* InsertExternalObject();

  /// @brief Method InternalRBTreeError, addr 0x5e55694, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Exception* InternalRBTreeError(::System::Data::RBTreeError internalError);

  /// @brief Method InvalidAttributeValue, addr 0x5e54bb4, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidAttributeValue(::StringW name, ::StringW value);

  /// @brief Method InvalidDataColumnMapping, addr 0x5e527c8, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidDataColumnMapping(::System::Type* type);

  /// @brief Method InvalidDateTimeMode, addr 0x5e4c4ec, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidDateTimeMode(::System::Data::DataSetDateTime mode);

  /// @brief Method InvalidDuplicateNamedSimpleTypeDelaration, addr 0x5e55634, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidDuplicateNamedSimpleTypeDelaration(::StringW stName, ::StringW errorStr);

  /// @brief Method InvalidField, addr 0x5e54ee4, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidField(::StringW name);

  /// @brief Method InvalidKey, addr 0x5e55024, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidKey(::StringW name);

  /// @brief Method InvalidOffsetLength, addr 0x5e517f8, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidOffsetLength();

  /// @brief Method InvalidParentNamespaceinNestedRelation, addr 0x5e531a4, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidParentNamespaceinNestedRelation(::StringW childTableName);

  /// @brief Method InvalidPrefix, addr 0x5e4b9a8, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidPrefix(::StringW name);

  /// @brief Method InvalidRemotingFormat, addr 0x5e540a8, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidRemotingFormat(::System::Data::SerializationFormat mode);

  /// @brief Method InvalidRowBitPattern, addr 0x5e53890, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidRowBitPattern();

  /// @brief Method InvalidRowState, addr 0x5e53844, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidRowState(::System::Data::DataRowState state);

  /// @brief Method InvalidRowVersion, addr 0x5e535f0, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidRowVersion();

  /// @brief Method InvalidSelector, addr 0x5e54f34, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidSelector(::StringW name);

  /// @brief Method InvalidSortString, addr 0x5e54204, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidSortString(::StringW sort);

  /// @brief Method InvalidStorageType, addr 0x5e547f8, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidStorageType(::System::TypeCode typecode);

  /// @brief Method IsDataSetAttributeMissingInSchema, addr 0x5e552d4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* IsDataSetAttributeMissingInSchema();

  /// @brief Method KeyColumnsIdentical, addr 0x5e52e40, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* KeyColumnsIdentical();

  /// @brief Method KeyDuplicateColumns, addr 0x5e52ce0, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* KeyDuplicateColumns(::StringW columnName);

  /// @brief Method KeyLengthMismatch, addr 0x5e52d74, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* KeyLengthMismatch();

  /// @brief Method KeyLengthZero, addr 0x5e52db8, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* KeyLengthZero();

  /// @brief Method KeyNoColumns, addr 0x5e52c08, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* KeyNoColumns();

  /// @brief Method KeyTableMismatch, addr 0x5e52bc4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* KeyTableMismatch();

  /// @brief Method KeyTooManyColumns, addr 0x5e52c4c, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Exception* KeyTooManyColumns(int32_t cols);

  /// @brief Method KeysToString, addr 0x5e51dc4, size 0x120, virtual false, abstract: false, final false
  static inline ::StringW KeysToString(::ArrayW<::System::Object*, ::Array<::System::Object*>*> keys);

  /// @brief Method LongerThanMaxLength, addr 0x5e4e5f4, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Exception* LongerThanMaxLength(::System::Data::DataColumn* column);

  /// @brief Method LoopInNestedRelations, addr 0x5e5307c, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* LoopInNestedRelations(::StringW tableName);

  /// @brief Method MaxLengthViolationText, addr 0x5e4f660, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW MaxLengthViolationText(::StringW columnName);

  /// @brief Method MergeFailed, addr 0x5e55594, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Exception* MergeFailed(::StringW name);

  /// @brief Method MergeMissingDefinition, addr 0x5e539b8, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* MergeMissingDefinition(::StringW obj);

  /// @brief Method MismatchKeyLength, addr 0x5e54ea0, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* MismatchKeyLength();

  /// @brief Method MissingAttribute, addr 0x5e54b38, size 0x1c, virtual false, abstract: false, final false
  static inline ::System::Exception* MissingAttribute(::StringW attribute);

  /// @brief Method MissingAttribute, addr 0x5e54b54, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Exception* MissingAttribute(::StringW element, ::StringW attribute);

  /// @brief Method MissingRefer, addr 0x5e55208, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Exception* MissingRefer(::StringW name);

  /// @brief Method MultipleParentRows, addr 0x5e553ac, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* MultipleParentRows(::StringW tableQName);

  /// @brief Method MultipleParents, addr 0x5e53800, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* MultipleParents();

  /// @brief Method MultipleTextOnlyColumns, addr 0x5e541c0, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* MultipleTextOnlyColumns();

  /// @brief Method NamespaceNameConflict, addr 0x5e517a8, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* NamespaceNameConflict(::StringW name);

  /// @brief Method NeededForForeignKeyConstraint, addr 0x5e521ac, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Exception* NeededForForeignKeyConstraint(::System::Data::UniqueConstraint* key, ::System::Data::ForeignKeyConstraint* fk);

  /// @brief Method NegativeMinimumCapacity, addr 0x5e54984, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* NegativeMinimumCapacity();

  /// @brief Method NestedCircular, addr 0x5e5535c, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* NestedCircular(::StringW name);

  /// @brief Method NoConstraintName, addr 0x5e51d30, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* NoConstraintName();

  /// @brief Method NoCurrentData, addr 0x5e53414, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* NoCurrentData();

  /// @brief Method NoOriginalData, addr 0x5e53458, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* NoOriginalData();

  /// @brief Method NoProposedData, addr 0x5e5349c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* NoProposedData();

  /// @brief Method NoTableName, addr 0x5e5417c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* NoTableName();

  /// @brief Method NonUniqueValues, addr 0x5e4e6ec, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* NonUniqueValues(::StringW column);

  /// @brief Method NotAllowDBNullViolationText, addr 0x5e4f7e8, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW NotAllowDBNullViolationText(::StringW columnName);

  /// @brief Method NotOpen, addr 0x5e52954, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* NotOpen();

  /// @brief Method NullDataType, addr 0x5e4bb80, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* NullDataType();

  /// @brief Method NullKeyValues, addr 0x5e4e64c, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* NullKeyValues(::StringW column);

  /// @brief Method NullRange, addr 0x5e54940, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* NullRange();

  /// @brief Method NullValues, addr 0x5e4e69c, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* NullValues(::StringW column);

  /// @brief Method ParentOrChildColumnsDoNotHaveDataSet, addr 0x5e53110, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* ParentOrChildColumnsDoNotHaveDataSet();

  /// @brief Method ParentTableMismatch, addr 0x5e53f44, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* ParentTableMismatch();

  /// @brief Method PolymorphismNotSupported, addr 0x5e553fc, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* PolymorphismNotSupported(::StringW typeName);

  /// @brief Method ProblematicChars, addr 0x5e549c8, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::Exception* ProblematicChars(char16_t charValue);

  /// @brief Method RangeArgument, addr 0x5e5488c, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Exception* RangeArgument(int32_t min, int32_t max);

  /// @brief Method ReadOnly, addr 0x5e52630, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* ReadOnly(::StringW column);

  /// @brief Method ReadOnlyAndExpression, addr 0x5e4d764, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* ReadOnlyAndExpression();

  /// @brief Method RecordStateRange, addr 0x5e53b18, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* RecordStateRange();

  /// @brief Method RelationAlreadyExists, addr 0x5e53a4c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationAlreadyExists();

  /// @brief Method RelationAlreadyInOtherDataSet, addr 0x5e53cc4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationAlreadyInOtherDataSet();

  /// @brief Method RelationAlreadyInTheDataSet, addr 0x5e53d08, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationAlreadyInTheDataSet();

  /// @brief Method RelationChildKeyMissing, addr 0x5e54dbc, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationChildKeyMissing(::StringW rel);

  /// @brief Method RelationChildNameMissing, addr 0x5e54d1c, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationChildNameMissing(::StringW rel);

  /// @brief Method RelationDataSetMismatch, addr 0x5e52d30, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationDataSetMismatch();

  /// @brief Method RelationDataSetNull, addr 0x5e53ebc, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationDataSetNull();

  /// @brief Method RelationDoesNotExist, addr 0x5e530cc, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationDoesNotExist();

  /// @brief Method RelationForeignRow, addr 0x5e52fa4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationForeignRow();

  /// @brief Method RelationForeignTable, addr 0x5e52e84, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationForeignTable(::StringW t1, ::StringW t2);

  /// @brief Method RelationNestedReadOnly, addr 0x5e52fe8, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationNestedReadOnly();

  /// @brief Method RelationNotInTheDataSet, addr 0x5e53d4c, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationNotInTheDataSet(::StringW relation);

  /// @brief Method RelationOutOfRange, addr 0x5e53d9c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationOutOfRange(::System::Object* index);

  /// @brief Method RelationParentNameMissing, addr 0x5e54ccc, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationParentNameMissing(::StringW rel);

  /// @brief Method RelationTableKeyMissing, addr 0x5e54d6c, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationTableKeyMissing(::StringW rel);

  /// @brief Method RelationTableNull, addr 0x5e53e78, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationTableNull();

  /// @brief Method RelationTableWasRemoved, addr 0x5e53f00, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationTableWasRemoved();

  /// @brief Method RemoveExternalObject, addr 0x5e52b80, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* RemoveExternalObject();

  /// @brief Method RemoveParentRow, addr 0x5e5251c, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* RemoveParentRow(::System::Data::ForeignKeyConstraint* constraint);

  /// @brief Method RemovePrimaryKey, addr 0x5e53c40, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* RemovePrimaryKey(::System::Data::DataTable* table);

  /// @brief Method RowAlreadyDeleted, addr 0x5e53568, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* RowAlreadyDeleted();

  /// @brief Method RowAlreadyInOtherCollection, addr 0x5e53a90, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* RowAlreadyInOtherCollection();

  /// @brief Method RowAlreadyInTheCollection, addr 0x5e53ad4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* RowAlreadyInTheCollection();

  /// @brief Method RowAlreadyRemoved, addr 0x5e537bc, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* RowAlreadyRemoved();

  /// @brief Method RowEmpty, addr 0x5e535ac, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* RowEmpty();

  /// @brief Method RowInsertMissing, addr 0x5e5376c, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* RowInsertMissing(::StringW tableName);

  /// @brief Method RowInsertTwice, addr 0x5e536c8, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Exception* RowInsertTwice(int32_t index, ::StringW tableName);

  /// @brief Method RowNotInTheDataSet, addr 0x5e531f4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* RowNotInTheDataSet();

  /// @brief Method RowNotInTheTable, addr 0x5e53238, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* RowNotInTheTable();

  /// @brief Method RowOutOfRange, addr 0x5e53634, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Exception* RowOutOfRange(int32_t index);

  /// @brief Method RowRemovedFromTheTable, addr 0x5e534e0, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* RowRemovedFromTheTable();

  /// @brief Method SelfnestedDatasetConflictingName, addr 0x5e54304, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* SelfnestedDatasetConflictingName(::StringW table);

  /// @brief Method SetDataSetNameConflicting, addr 0x5e53918, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* SetDataSetNameConflicting(::StringW name);

  /// @brief Method SetDataSetNameToEmpty, addr 0x5e538d4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* SetDataSetNameToEmpty();

  /// @brief Method SetFailed, addr 0x5e52838, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* SetFailed(::StringW name);

  /// @brief Method SetFailed, addr 0x5e4daa8, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Exception* SetFailed(::System::Object* value, ::System::Data::DataColumn* column, ::System::Type* type, ::System::Exception* innerException);

  /// @brief Method SetIListObject, addr 0x5e528cc, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* SetIListObject();

  /// @brief Method SetParentRowTableMismatch, addr 0x5e52f44, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Exception* SetParentRowTableMismatch(::StringW t1, ::StringW t2);

  /// @brief Method SimpleTypeNotSupported, addr 0x5e54af4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* SimpleTypeNotSupported();

  /// @brief Method StorageSetFailed, addr 0x5e54ab0, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* StorageSetFailed();

  /// @brief Method TableAlreadyInOtherDataSet, addr 0x5e543a4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* TableAlreadyInOtherDataSet();

  /// @brief Method TableAlreadyInTheDataSet, addr 0x5e543e8, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* TableAlreadyInTheDataSet();

  /// @brief Method TableCannotAddToSimpleContent, addr 0x5e54138, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* TableCannotAddToSimpleContent();

  /// @brief Method TableCantBeNestedInTwoTables, addr 0x5e5302c, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* TableCantBeNestedInTwoTables(::StringW tableName);

  /// @brief Method TableForeignPrimaryKey, addr 0x5e540f4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* TableForeignPrimaryKey();

  /// @brief Method TableInConstraint, addr 0x5e54554, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* TableInConstraint(::System::Data::DataTable* table, ::System::Data::Constraint* constraint);

  /// @brief Method TableInRelation, addr 0x5e54510, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* TableInRelation();

  /// @brief Method TableNotFound, addr 0x5e546e8, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* TableNotFound(::StringW tableName);

  /// @brief Method TableNotInTheDataSet, addr 0x5e544c0, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* TableNotInTheDataSet(::StringW table);

  /// @brief Method TableOutOfRange, addr 0x5e5442c, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Exception* TableOutOfRange(int32_t index);

  /// @brief Method TablesInDifferentSets, addr 0x5e53a08, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* TablesInDifferentSets();

  /// @brief Method ThrowDataException, addr 0x5e511b8, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowDataException(::StringW error, ::System::Exception* innerException);

  /// @brief Method ThrowMultipleTargetConverter, addr 0x5e55490, size 0x70, virtual false, abstract: false, final false
  static inline void ThrowMultipleTargetConverter(::System::Exception* innerException);

  /// @brief Method TooManyIsDataSetAtributeInSchema, addr 0x5e55318, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* TooManyIsDataSetAtributeInSchema();

  /// @brief Method TraceException, addr 0x5e50d94, size 0xac, virtual false, abstract: false, final false
  static inline void TraceException(::StringW trace, ::System::Exception* e);

  /// @brief Method TraceExceptionAsReturnValue, addr 0x5e50e40, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* TraceExceptionAsReturnValue(::System::Exception* e);

  /// @brief Method TraceExceptionForCapture, addr 0x5e4c888, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* TraceExceptionForCapture(::System::Exception* e);

  /// @brief Method TraceExceptionWithoutRethrow, addr 0x5e4cae4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* TraceExceptionWithoutRethrow(::System::Exception* e);

  /// @brief Method TypeNotAllowed, addr 0x5e516e8, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeNotAllowed(::System::Type* type);

  /// @brief Method UDTImplementsIChangeTrackingButnotIRevertible, addr 0x5e52778, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* UDTImplementsIChangeTrackingButnotIRevertible(::StringW typeName);

  /// @brief Method UndefinedDatatype, addr 0x5e54e0c, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* UndefinedDatatype(::StringW name);

  /// @brief Method UniqueAndExpression, addr 0x5e4e0c4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* UniqueAndExpression();

  /// @brief Method UniqueConstraintViolation, addr 0x5e52240, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* UniqueConstraintViolation();

  /// @brief Method UniqueConstraintViolationText, addr 0x5e51ee4, size 0x184, virtual false, abstract: false, final false
  static inline ::StringW UniqueConstraintViolationText(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> columns,
                                                        ::ArrayW<::System::Object*, ::Array<::System::Object*>*> values);

  /// @brief Method ValueArrayLength, addr 0x5e533d0, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* ValueArrayLength();

  /// @brief Method _Argument, addr 0x5e50e94, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* _Argument(::StringW error);

  /// @brief Method _Argument, addr 0x5e50f00, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Exception* _Argument(::StringW error, ::System::Exception* innerException);

  /// @brief Method _ArgumentNull, addr 0x5e50f7c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Exception* _ArgumentNull(::StringW paramName, ::StringW msg);

  /// @brief Method _ArgumentOutOfRange, addr 0x5e50ff8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Exception* _ArgumentOutOfRange(::StringW paramName, ::StringW msg);

  /// @brief Method _Constraint, addr 0x5e51274, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* _Constraint(::StringW error);

  /// @brief Method _Data, addr 0x5e51208, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* _Data(::StringW error);

  /// @brief Method _DeletedRowInaccessible, addr 0x5e5134c, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* _DeletedRowInaccessible(::StringW error);

  /// @brief Method _DuplicateName, addr 0x5e513b8, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* _DuplicateName(::StringW error);

  /// @brief Method _InRowChangingEvent, addr 0x5e51424, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* _InRowChangingEvent(::StringW error);

  /// @brief Method _IndexOutOfRange, addr 0x5e51074, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* _IndexOutOfRange(::StringW error);

  /// @brief Method _InvalidConstraint, addr 0x5e512e0, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* _InvalidConstraint(::StringW error);

  /// @brief Method _InvalidEnumArgumentException, addr 0x5e5114c, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* _InvalidEnumArgumentException(::StringW error);

  /// @brief Method _InvalidEnumArgumentException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Exception* _InvalidEnumArgumentException(T value);

  /// @brief Method _InvalidOperation, addr 0x5e510e0, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* _InvalidOperation(::StringW error);

  /// @brief Method _NoNullAllowed, addr 0x5e51490, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* _NoNullAllowed(::StringW error);

  /// @brief Method _ReadOnly, addr 0x5e514fc, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* _ReadOnly(::StringW error);

  /// @brief Method _RowNotInTable, addr 0x5e51568, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* _RowNotInTable(::StringW error);

  /// @brief Method _VersionNotFound, addr 0x5e515d4, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* _VersionNotFound(::StringW error);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExceptionBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExceptionBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExceptionBuilder(ExceptionBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExceptionBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExceptionBuilder(ExceptionBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13714 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::ExceptionBuilder, 0x10>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::ExceptionBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ExceptionBuilder*, "System.Data", "ExceptionBuilder");
